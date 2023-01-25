#include<stdio.h>
#define pi 53.6

int main()
{


    int a=8;
    float b=9.366464646;
    // b=9.3 if we do this without commenting then also program will work fine because we dont define it as constant 
    printf("the value of a is %20d the  value of b is %20.8f \n" , a,b );
    printf("the value of a is %d\n the  value of b is %f \n" , a,b );
    // %20.8f this gives output upto 8 decimal places and gives spacing of 20 digits 
    // %d is called formate specifiers 
    // CONSTANTS DEFINING
    const float c=9.66;
    // now we can not give any other value to b 
    //  another way to define the constant is to define it globaly as done in the program
    printf("%f\n" , pi);
    // \n is escape sequence
    printf("to print \\ \n");
    printf("to print \\n");
    printf("usesof\t\t tab escape \a sequence");
    return 0 ;


}

