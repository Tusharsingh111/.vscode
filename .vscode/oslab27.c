// #include<stdio.h>
// #include<pthread.h>
// char *a;
// void *func(){
//     printf("In thread function\n");
//     pthread_exit("Exit thread function \n");
// }
// int main(){
//     pthread_t t1;
//     void *a;
//     printf("In main thread\n");
//     pthread_create(&t1,NULL,func,NULL);
//     pthread_join(t1,&a);
//     printf("%s\n",a);
// }


#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void *myfunc(void *myvar);
int main(int argc,char *argv[]){
    pthread_t t1,t2;
    char *a="first thread";
    char *b="second thread";
    int r1,r2;
    r1=pthread_create(&t1,NULL,myfunc,(void*)a);
    r2=pthread_create(&t2,NULL,myfunc,(void*)b);
    printf("Main function after pthread_create\n");
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    printf("first thread r1=%d\n",r1);
    printf("Second thread r2=%d\n",r2);
    return 0;
}
void *myfunc(void *myvar){
    char *msg;
    msg=(char*)myvar;
    int i;
    for(i=0;i<10;i++){
        printf("%s%d\n",msg,i);
        sleep(2);
    }
    return NULL;
}