#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>

int main(void) 
{    
    pid_t child_pid;    
    int status;
    pid_t wait_result;
    child_pid = fork();
    
    if (child_pid == 0) 
    { 
        /* this code is only executed in the child process */ 
        printf ("I am a child and my pid = %d\n", getpid());
        execl("/bin/ls", "ls", "-l", NULL);
        /* if execl succeeds, this code is never used */
        printf ("Could not execl file /bin/ls\n");
        /* this exit stops only the child process */        
        exit(1);
    }
    else if (child_pid > 0) 
    {
        /* this code is only executed in the parent process */
        printf ("I am the parent and my pid = %d\n", getpid());
        printf ("My child has pid = %d\n", child_pid);
        printf ("I am a parent and I am going to wait for my child\n");
        do 
        {
            /* parent waits for the SIGCHLD signal sent
            to the parent of a (child) process when 
            the child process terminates */
            wait_result = wait(&status);
        } while (wait_result != child_pid);
        printf ("I am a parent and I am quitting.\n");
    }
    else 
    {
        printf ("The fork system call failed to create a new process\n");
        exit(1);
    }
    return 0;
}