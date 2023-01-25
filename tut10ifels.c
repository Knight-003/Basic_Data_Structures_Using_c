#include<stdio.h>

int main(){
    int a;
    printf("ent age");
    scanf("%d" , &a);
    printf("you have entered  %d \n" , a);
    if (a>=18)
    {
        printf("you can vote");

    }
    else if (a>10)
    {
        if (a>15)
        {
            printf("you can defenetly vote after some time ");
        }

        else{
            printf("you can not vote ");
        }
        
        
    }
    
    
    else{
        printf("go home kid ");
    }


    // the last else is not important if we dont define else it will directly return to zero







    return 0;
}