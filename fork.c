#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // for pid_t data type and getpid function

int main(){
    pid_t child_pid;

    //child process
    if(child_pid == 0){
        //should output current PID and childs PID as 0
    } else {
        //should output the parent one and then child
        //in this case the child one has to be corresponding to the if's PID
    }


    return 0;
}