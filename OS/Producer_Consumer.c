#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#define N 10

sem_t mutex,full,empty;
int buffer[N];

void *producer(void *arg)
{
	int i,index=0;
	for(i=0;i<26;i++)
	{
		sem_wait(&empty);
		sem_wait(&mutex);
		buffer[index]=i+65;
		printf("The item added by producer is: %c",buffer[index]);
		sem_post(&full);
		sem_post(&mutex);
		if(++index==N)
		index=0;
	}
	pthread_exit("SUCCESS");
}

void *consumer(void *arg)
{
	int i,index=0;
	for(i=0;i<26;i++)
	{
		sem_wait(&full);
		sem_wait(&mutex);
		printf("Consumer consumed the item: %c",buffer[index]);	
		sem_post(&empty);
		sem_post(&mutex);
		if(++index==N)
		index=0;
	}
	pthread_exit("SUCCESS");
}

int main()
{
	pthread_t tid1,tid2;
	sem_init(&mutex,0,1);
	sem_init(&empty,0,N);
	sem_init(&full,0,0);
	pthread_create(&tid1,NULL,producer,NULL);	
	pthread_create(&tid2,NULL,consumer,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	sem_destroy(&empty);
	sem_destroy(&full);
	sem_destroy(&mutex);
	return 0;
}
