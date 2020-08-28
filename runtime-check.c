#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void __attribute__((constructor)) runtime_check(void){
    pid_t pid, gpid;
    pid = getpid();
    gpid = getpgrp();

    if (pid != gpid) {
        exit(-1);
    }
}

int main(){
    while(1);
}
