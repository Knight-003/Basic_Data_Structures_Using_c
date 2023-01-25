#include <stdio.h>

int calc(int a, char s, int b)
{

    switch (s)
    {
    case '*':
    {
        return a + b;
        break;
    }
    case '/':
    {
        return a / b;
        break;
    }
    case '+':
    {
        return a + b;
        break;
    }
    case '-':
    {
        return a - b;
    }
    case '^':
    {
        printf("enter the power");
        int s, t;
        t = a;
        scanf("%d", &s);
        for (int i = 0; i < s-1; i++)
        {
            t = t * a;
        }
        return t;
    }
     default:
    {

        printf("invalid operation");

        return 0;
    }
    }
}

int main()
{
    int a, b, z;
    char s,d;
    
   
    
    printf("enter the 1st number ");
    scanf("%d", &a);
     
     printf("do you want operation with 2 number ");
     scanf(" %c",&d);
    if (d=='n')
    {
        goto lap2;
    }
    printf("enter the second number");
    scanf("%d", &b);
    lap2:
    printf("enter the operation between them");
    scanf(" %c", &s);
    z = calc(a, s, b);
    printf("the value of %c between %d and %d is %d ", s, a, b, z);

    return 0;
}