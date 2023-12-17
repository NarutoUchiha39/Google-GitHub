#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define threads 5
void * runner (void * args ){

	printf("Hello from thread %d",*(int*)args);
	pthread_exit(0);
}

int main()
{
	pthread_t tid[threads];
	pthread_attr_t attr;
	
	pthread_attr_init(&attr);
	int scope;	
	
	pthread_attr_setscope(&attr,PTHREAD_SCOPE_PROCESS);
	
	if(pthread_attr_getscope(&attr,&scope) == PTHREAD_SCOPE_SYSTEM ){
		printf("System Scope");
	}

	else{
		printf("Process Scope");

	}

	for(int i = 0;i<threads;i++){
		if(pthread_create(&tid[i],&attr,runner,(void*)i)==0){
			
			printf("Thread created succesfull :D");
		}
		
		else{
			printf("Thread creation unccessful :'D ");
		}
			
	}

	
        for(int i = 0;i < threads; i++ ){
		
		if(pthread_join(tid[i],NULL) == 0){
			
			printf("Thread joined successfully :D ");
		}
		
		else{
			
			printf("Threads not joined :'D ");
		
		}

	}

			
	

}
