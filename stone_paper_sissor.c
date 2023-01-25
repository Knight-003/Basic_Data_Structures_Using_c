#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    printf("enter the number of turns ");
    scanf("%d", &n);
    srand(time(NULL));

    int u = 0, c = 0;
    printf("enter\n\n0-for stone\n\n1- paper\n\n2- sisor\n\n");

    for (int i = 0; i < n; i++)
    {

        int r;
        scanf("%d", &r);
        int s = rand() % 3;
        
        

        if (s == 0 && r == 0)
        {

            printf("this round is draw\n\n\n ");
        }
        else if (s == 0 && r == 1)
        {

            printf(" user win this turn\n\n\n ");
            u = u + 1;
        }
        if (s == 0 && r == 2)
        {

            printf("computer wins this turn \n\n\n");

            c = c + 1;
        }
        if (s == 1 && r == 0)
        {

            printf("this round is for computer\n\n\n");
            c = c + 1;
        }
        if (s == 1 && r == 1)
        {

            printf("this round is draw \n\n\n");
        }
        if (s == 1 && r == 2)
        {

            printf("this round is for you\n\n\n ");
            u = u + 1;
        }
        if (s == 2 && r == 0)
        {

            printf("this round is for you\n\n\n ");
            u = u + 1;
        }
        if (s == 2 && r == 1)
        {

            printf("this round is for system\n\n\n");
            c = c + 1;
        }
        if (s == 2 && r == 2)
        {

            printf("this round is draw\n\n\n");
        }
    }
    if (c > u)
    {
        printf(" your computer wins better luck next time \n\n\n");
    }
    else if (u > c)
    {
        printf("YOU GOT ULTIMATE  WIN !\n\n\n");
    }
    else if (u = c)
    {
        printf("THIS IS A DRAW\n\n\n");
    }

    printf("the score card is \n\n user\t\t\tcomputer\n\n  %d\t\t\t  %d", u, c);

    return 0;
}