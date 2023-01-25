#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n ,b;

    scanf("%d", &n);
    
    int s = (2 * n) ;
    b=s-1;
    int arr[s][s];
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {

            arr[i][j] = n;
            arr[j][i] = n;
            
        }
        n= n-1;
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j<b < s; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}