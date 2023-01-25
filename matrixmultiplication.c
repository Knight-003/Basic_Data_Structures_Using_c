#include <stdio.h>

int main()
{
    int n, m, s;
    printf("enter the n");
    scanf("%d", &n);
    printf("enter the m ");
    scanf("%d", &m);
    printf("enter the o ");
    scanf("%d", &s);

    int m1[n][s];
    int m2[s][m];
    int res[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum;

            for (int k = 0; k < s; k++)
            {
                int sum = sum + m1[i][k] * m2[k][j];
                res[i][j] = sum;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (i == 0)
            {
                printf("%d\n", res[i][j]);
            }
            if (i == 1)
            {
                printf("%d\n", res[i][j]);
            }
            if (i == 2)
            {
                printf("%d\n", res[i][j]);
            }
        }
    }

    return 0;
}