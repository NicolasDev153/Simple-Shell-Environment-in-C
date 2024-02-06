#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    pid_t pid;

    pid = getpid(); // Get the process ID of the current process
    printf("My process ID is: %d\n", pid);

    return 0;
}