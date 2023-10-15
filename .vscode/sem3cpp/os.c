
/*program to create a child process using fork

*/
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main(){
    int pid;
    pid=getpid();
    printf("curent process pid is%d",pid);
    printf("forking a child process\n");
    pid=fork();
    if (pid==0)
    {
        printf("child process id:%d and its parent id:%d",getpid(),getppid());
    }
    else
    {
        printf("parent process id %d",getpid());
    }
    return 0;
}



/*create a program to orphan process*/


#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
    int pid;
    pid=getpid();
    printf("current process pid is %d",pid);
    printf("forking a child process \n");
    pid=fork();
    if (pid==0)
    {
        printf("child process complete");
        sleep(10);
        printf("orphan child parent id: %d ", getppid());
    }
    else
    {
        printf("parent process completed");
    }
    return 0;
}


/*program to create a zombie process*/

#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
int main(){
    pid_t a;
    a=fork();
    if (a>0)
    {
        sleep(20);
        printf("pID of parent %d",getpid());

    }
    else
    {
        printf("pid of child%d",getpid());
        exit(0);
    }
    
}


/*write a program using system calls operation on process  to simulate that n fork calls create (2^n-1) child process.*/

#include <stdio.h>
#include <unistd.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Creating %d child processes...\n", (1 << n) - 1);
    
    for (int i = 0; i < n; i++) {
        fork();
    }
    
    sleep(1); // Give some time for child processes to execute before terminating
    
    return 0;
}



/*write a program using systems for operations on process to create a heirarchy of processes p1->p2->p3 also print the id and parent id for each process.*/

#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t p1, p2, p3;

    // Create process p1
    p1 = fork();
    if (p1 < 0) {
        perror("fork failure");
        return 1;
    } else if (p1 == 0) {
        // Process p1
        printf("p1 - PID: %d, Parent PID: %d\n", getpid(), getppid());

        // Create process p2
        p2 = fork();
        if (p2 < 0) {
            perror("fork failure");
            return 1;
        } else if (p2 == 0) {
            // Process p2
            printf("p2 - PID: %d, Parent PID: %d\n", getpid(), getppid());

            // Create process p3
            p3 = fork();
            if (p3 < 0) {
                perror("fork failure");
                return 1;
            } else if (p3 == 0) {
                // Process p3
                printf("p3 - PID: %d, Parent PID: %d\n", getpid(), getppid());
            }
        }
    }

    return 0;
}


