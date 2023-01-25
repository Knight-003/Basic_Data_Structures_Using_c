#include<stdio.h>
int main ()

{
    
    int i=0;
    
    
    while (i<10)
    {
        printf("enter a no.\n");
        scanf("%d" , &i);// we can also take new value for i
        i++;
        
        if (i==5)
        {
            break;
        }
        
        printf("break is not executed\n");
    }
    

    printf("break is executed");




    return 0;
}