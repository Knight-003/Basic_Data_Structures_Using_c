#include<stdio.h>

int main (){
    void *ptr;
    int a=1;
    float b=2;
    ptr=&a;
    printf("%d",*((int*)ptr));
    return 0;
}