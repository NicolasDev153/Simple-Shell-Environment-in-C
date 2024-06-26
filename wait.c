#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <sys/types.h>
#include <sys/wait.h>

int main(){
    pid_t child_pid = fork();
    pid_t wait_result;
    int stat_loc;

    //child process
    if(child_pid == 0){
        printf("### Child ###\nCurrent PID: %d and Child PID: %d\n",
               getpid(), child_pid);
        sleep(1);
    } else {
        wait_result = waitpid(child_pid, &stat_loc, WUNTRACED);
        printf("### Parent ###\nCurrent PID: %d and Child PID: %d\n",
                getpid(), child_pid);
    }

    return 0;
}
