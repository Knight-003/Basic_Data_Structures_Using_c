#include<stdio.h>
int main(){
    int a=43;
    int*ptr=&a;
    printf("%x\n",ptr);//address of a
     printf("%p\n",ptr);//address of a
     printf("%p\n",&ptr);//address of pointer
     printf("%d\n",*ptr);//value of a
     printf("%d\n",ptr);
     printf("%x\n",&a);

     //if *p and *q and p=q q value assigned to p
     int**c=&ptr;
     printf("%d",**c);
    return 0;




}