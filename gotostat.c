#include<stdio.h>
int main(){

int i ,j, num;
for ( i = 0; i < 8; i++)
{
    printf("this value is of 1st loop\n%d" , i);
    for (j = 0; j< 8; j++)
    {
        printf("this is for 2nd loop\n");
        printf("enter 0 to exit the program \n");
        scanf("%d\n" , &num);
        if (num==0)
        {
            goto end;//if we use break we can only exit 1st loop
        }
        
    }
    
}
    end:




    return 0;







}