
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

void processo_pai(){
    int *statusfilho, *statusneto, *statuspai;
    int pidfilho;
    if (( pidfilho = fork()) < 0) {
        printf("erro no fork\n");
        exit(1);
    }else if (pidfilho == 0){
    	processo_filho(pidfilho);
   
    }else{
        wait(statusfilho); //espera o processo filho encerrar
        printf("Sou o processo %d pai, sejam bem vindos", pidpai);
        exit(1);
    }

}

int processo_filho(int pidfilho){
    printf("Ola processo %d neto sou o processo %d filho", pidneto, pidfilho);
    sleep(5);
    return 0;
}

int processo_neto(int pidneto){
    printf("Sou processo %d neto", pidneto);
    return 0;
}

int main(){
   processo_pai();


}
