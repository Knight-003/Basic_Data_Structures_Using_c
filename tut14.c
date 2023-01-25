#include<stdio.h>
int main(){
    
    int a;
    printf("enter a max number");
    scanf("%d" , &a);
    while (a<59)
    {
        printf("this is the value of a %d \n" , a);
        a=a+1;
        
    }
    
    return 0;
    
}
