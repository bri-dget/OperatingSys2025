#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int rc = fork();
    if (rc < 0)
    {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    }
    else if (rc == 0) //child
    {
        printf("hello\n");
    }
    else //parent
    {
        printf("goodbye\n");
    }
    return 0;
}
