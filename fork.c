#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // for pid_t data type and getpid function
#include <sys/types.h>

int main(){
    pid_t child_pid = fork();
    pid_t parentPid = getpid(); //this will be parent 

    //child process
    if(child_pid == 0){
        printf("### Child ###\nCurrent PID: %d and Child PID: %d\n",
               parentPid, child_pid);
               /*We could have also used getpid() directly instead of
               creating parentPid*/
    } else {
        printf("### Parent ###\nCurrent PID: %d and Child PID: %d\n",
                parentPid, child_pid);
    }

    return 0;
}