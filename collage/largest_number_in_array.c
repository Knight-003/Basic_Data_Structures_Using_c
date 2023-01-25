#include <stdio.h>
void lar(int arr[], int n)
{
    int i, j;
    int s = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == i)
            {
                continue;
            }

            if (arr[i] < arr[j])
            {
                goto lab;
            }

            if (arr[i] == arr[j])
            {

                s = s + 1;
                if (s > 1)
                {

                    goto lab;
                }

                printf("the largest number is %d\n", arr[i]);
                goto lab;
            }
        }
        printf("the largest number is %d\n", arr[i]);
    lab:;
    }
}
int solution(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{

    int n;
    printf("enter the no. of elements ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the numbers ");
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d no.\n", i + 1);
        scanf("%d", &arr[i]);
    }
    lar(arr, n);
    printf("the harry's soln is %d", solution(arr, n));

    return 0;
}