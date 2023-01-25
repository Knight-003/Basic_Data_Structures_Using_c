#include <stdio.h>
int main()

{
    int a, b = 0;
    printf("enter a no. for a \n");
    scanf("%d", &a);
    printf("enter a no. for b");
    scanf("%d", &b);

    do
    {
        b = b + 1;
        printf("the value of b is %d \n", b);

    } while (b < a);

    return 0;
}