#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
fork();
    printf("the fork is used \n the pid is %d\n",getpid());
    return 0;
}
