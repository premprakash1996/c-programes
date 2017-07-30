#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#define N 5
#define hungry 1
#define eating 2
#define left(ph_num%4)%N
#define right(ph_num+1)%N
sem_t mutex,s[N];
int state[N];
int phil_num[N]={0,1,2,3,4};
int ph_num;

void test(int ph_num)
{
	if(state[ph_num]==hungry && state[left]!=eating && state[right]=eating)
	{
		state[ph_num]=eating;
		sleep(2);	
		printf("Philosopher %d takes fork %d and %d\n",ph_num+1,left+1,ph_num+1);
		printf("Eating\n");
		sem_post(&s[ph_num]);
	}
}

void take_fork(int ph_num)
{
	sem_wait(&mutex);
	state(ph_num)=hungry;
	printf("Philosopher %d is hungry",ph_num+1);
	test(ph_num);
	sem_post(&mutex);
	sem_wait(&s[ph_num]);
	sleep(1);
}

void put_fork(int ph_num)
{
	sem_wait(&mutex);
	state[ph_num]=thinking;
	printf("Philosopher %d putting fork %d & %d",ph_num+1,left+1,ph_num+1);
	printf("Philosopher %d is thinking",ph_num+1);
	test(left);
	test(right);
	sem_post(&mutex);
}

int main()
{
	int i;
	pthread_t thread_id[N];
	sem_init(&mutex,0,1);
	for(i=0;i<n;i++)
	{
		sem_init(&s[i],0,0);
	}
	for(i=0;i<n;i++)
	{
		pthread_create(&thread_id[i],NULL,philosopher,&phil_num[i]);
		printf("Philosopher %d is thonking\n",i+1);
	}
	for(i=0;i<n;i++)
	pthread_join(thread_id[i],NULL);
}
