#include <stdio.h>
int main()

{

    int i = 0;
    printf("enter a no.\n");

    while (i < 10)
    {
        scanf("%d", &i); // we can also take new value for i
        i++;

        if (i == 5)
        {
            continue;
        }

        printf("continue is not executed\n");
    }

    return 0;
}