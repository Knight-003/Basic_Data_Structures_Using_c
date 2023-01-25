#include<stdio.h>
int main(){
    
    int a , b;
    printf("enter a min number");
    scanf("%d" , &a);
    printf("enter a max number");
    
    scanf("%d" , &b);
    
    while (a<b)
    {
        printf("this is the value of a %d \n" , a);
        a=a+1;
        
    }
    
    return 0;
    
}

