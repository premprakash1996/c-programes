#include<stdio.h>   
#include<pthread.h>   
#include<semaphore.h>   
   
sem_t wsem,mutex ;  
int readcount=0 ;  

void *reader(void *arg)  
{  
	int c=(int)arg ;  
	printf("\nReader %d is created",c);  
	sleep(1);  
	sem_wait(&mutex) ;  
	readcount++;  
	if(readcount==1)  
		sem_wait(&wsem) ;  
	sem_post(&mutex) ;  
	//Critcal Section   
  	printf("\n\nReader %d is reading\n ",c);  
  	sleep(1) ;  
  	printf("\nReader%d finished reading\n",c);  
 	//critical section completd  
  	sem_wait(&mutex) ;  
    readcount-- ;  
	if(readcount==0)  
    	sem_post(&wsem) ;  
  	sem_post(&mutex) ;  
}  

void *writer(void *arg)  
{  
	int c=(int)arg ;  
	printf("\nWriter %d is created",c);  
	sleep(1);  
	sem_wait(&wsem) ;  
	printf("\nWriter %d is writing\n",c) ;  
	sleep(1);  
	printf("\nWriter%d finished writing\n",c);  
	sem_post(&wsem) ;  
}

int main()  
{  
	int a=1,b=1;      
	pthread_t r,w,r1,w1 ;
	sem_init(&wsem,0,1) ;  
	sem_init(&mutex,0,1) ;  
	pthread_create(&r,NULL,reader,(void *)a);  
	a++;  
	pthread_create(&w1,NULL,writer,(void *)b);  
	b++;  
	pthread_create(&r1,NULL,reader,(void *)a);  
	pthread_create(&w,NULL,writer,(void *)b);  
	pthread_join(r,NULL);  
	pthread_join(w1,NULL);  
	pthread_join(r1,NULL);  
	pthread_join(w,NULL) ;  
	return 0;  
}  
