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
        int wc = wait(NULL);
        printf("hello wc is %d\n", wc);
    }
    else //parent
    {
        int wc = wait(NULL);
        printf("goodbye wc is %d\n", wc);
    }
    return 0;
}
