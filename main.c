#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

void wait(void)
{
    sleep(2);

    printf("Done.\n");
}


int main(){
    pthread_t thread_pai;
    int err;

    err = pthread_create(&thread_pai, NULL, wait, NULL);

    if (err)
    {
        printf("An error occured: %d", err);
        return 1;
    }
        
    printf("Waiting for the thread to end...\n");

    pthread_join(thread_pai, NULL);

    printf("Thread ended.\n");  
    return 0;
}

/* Seguindo o tutorial do site
https://dev.to/quantumsheep/basics-of-multithreading-in-c-4pam */