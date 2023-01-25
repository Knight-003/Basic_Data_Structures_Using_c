#include<stdio.h>
int main ()
{
    label:
        printf("loop done\n");
        
    printf("hello world\n");
    goto label;
    end:
    return 0;
}