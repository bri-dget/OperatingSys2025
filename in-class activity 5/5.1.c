#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int x = 54;
    int rc = fork();
    if (rc < 0)
    {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    }
    else if (rc == 0)
    {
        x = 43;
        printf("x is %d\n", x);
    }
    else
    {
        x = 42;
        printf("x is %d\n", x);
    }
    return 0;
}
