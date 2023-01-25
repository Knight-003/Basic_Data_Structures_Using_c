#include <stdio.h>

int main()
{

    int a,b;
    
    lable1:
    printf("enter 0 to exit or 1  to continue\n  ");
    scanf("%d", &b);
    if (b == 0)
    {
        goto lab1;
    }
    else if (b==1){
    
    

    printf("enter the serial no. of the conversion which you want \n1.kilometers to meters \n2. inches to foot\n3.cms to inches\n4.pound to kg ");
    scanf("%d", &a);

    if (a == 1) // kilometer to meter
    {
        int z;
        printf("enter the number in kilometer\n");
        scanf("%d", &z);
        printf("the value in meters is %d\n", z * 1000);
        goto lable1;
    }

    if (a == 2)
    {

        float z;
        printf("enter the number in inches\n");
        scanf("%f", &z);
        printf("the value in foot is  %f\n", z / 12);
        goto lable1;
    }

    else if (a == 3)
    {

        float z;
        printf("enter the number in centimeter\n");
        scanf("%f", &z);
        printf("the value in inches is %f\n", z * 0.394);
        goto lable1;
    }

    else if (a == 4)
    {

        float z;
        printf("enter the number in pounds\n");
        scanf("%f", &z);
        printf("the value in kg is %f\n", z * 0.454);
        goto lable1;
    }

    }
    lab1:
    return 0;
}