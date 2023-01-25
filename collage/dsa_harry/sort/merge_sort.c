#include <stdio.h>
void merge(int a[], int mid, int low, int high)
{

    int i = low;
    int j = mid + 1;
    int k = low;
    int b[100];
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            k++, i++;
        }
        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++, i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++, j++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}
void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main()
{

    int arr[] = {7, 8, 1, 2, 3};
    mergeSort(arr,0,4);
    printArray(arr,5);
    return 0;
}