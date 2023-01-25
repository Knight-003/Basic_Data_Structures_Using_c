#include <stdio.h>

void odev(int a)
{

    if (a % 2 == 0)
    {
        printf("the number is even ");
    }

    else
    {
        printf("the number is odd");
    }
}

int main()
{
    int a;
    char c;
lable:

    printf("enter a number\n ");
    scanf("%d", &a);
    odev(a);
label3:
    printf("do you want to exit  \n ");
    scanf("%c", &c);
    if (c == 'n')
    {
        goto lable;
    }

    else if (c == 'y')
    {
        goto lable2;
    }

    else if (c != 'n' && c != 'y')
    {
        // printf("invalid input");
        goto label3;
    }

lable2:

    return 0;
}