#include<stdio.h>
#include"temp.c"

int s=48;
int func(){

   extern int s;// extern generally used to take value from global scope in a user defined function
    return s ;
}

int main (){
    int s;
    s=func();
    printf("the value of s is %d",s);
    printf("the temp value is %d",x);
    return 0;
}