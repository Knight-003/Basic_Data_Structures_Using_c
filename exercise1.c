                                            //MULTIPLICATION TABLE 

#include<stdio.h>
int main ()

{

    int a , b,c ,d;
    lable2:
    printf("enter 0 to exit and other number to build your table ");
    scanf("%d",&d);
    if (d==0)
    {
        goto end ;
    }
    
    
    int h;
    lable1:
    printf("enter the initialization value");
    scanf("%d", &a);
    printf("enter the end value ");
    scanf("%d" , &b);
    printf("enter the number for which table is required");
    scanf("%d",&c);
    printf("these are your values\n initial %d \n end %d \n required %d\n ",a,b,c);
    printf("if you want to continue for the values press any digit other than0 else press 0 to renter the values\n");
    scanf("%d",&h);
    if (h==0)
    {
        goto lable1;
    }
    

    
    for (int i = a; i <=b; i++)
    {
       printf("%d times %d is %d\n",i,c, i*c);
    }
    goto lable2;
    
    end:


    return 0;
}