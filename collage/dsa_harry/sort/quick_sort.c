#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int part(int a[], int low, int high)
{
    int i = low + 1;
    int j = high;
    int temp;
    int pivot = a[low];
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    temp = a[j];
    a[j] = a[low];
    a[low] = temp;
    return j;
}

void quick_sort(int arr[], int low, int high)
{

    int pa;
    if (low < high)
    {
        pa = part(arr, low, high);
        quick_sort(arr, low, (pa - 1));
        quick_sort(arr,  (pa + 1),high);
    }
}

int main()
{
    int arr[] = {2, 4, 3, 9, 1, 4, 8, 7, 5, 6};
    printArray(arr, 10);
    quick_sort(arr, 0, 9);
    printArray(arr, 10);
}