#include<stdio.h>
int prime(int a)
{
    for (int i = 2; i < (a-1); i++)
    {
        if (a%i==0)
        {
            return 0;
        }
        
    }
    
   return 1;


}

int main (){

    printf("enter the starting point");
    int x,y,z;
    scanf("%d",&x);
    printf("enter the last no.");
    scanf("%d",&y);
    for (int i = x; i <= y; i++)
    {
        
        if (prime(i))
        {
            printf("%d ",i);
        }
        
        
        

    }
    

    





    return 0;
}