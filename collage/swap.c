#include <stdio.h>

void swap(int a, int b)
{

    int t;
    t = a;
    a = b;
    b = t;
    printf("%d%d", a, b);
}

int main()
{
    int x, y;
    printf("enter thr number to swap");
    scanf("%d",&x);
    scanf("%d",&y);

    swap(x, y);
    return 0;

    
}