#include<stdio.h>
#include "temp2.c"

int main (){
    int n ,s;
    printf("enter the number ");
    scanf("%d",&n);

    s=count(n);
    printf("the number of digits are %d",s);


    return 0;
}