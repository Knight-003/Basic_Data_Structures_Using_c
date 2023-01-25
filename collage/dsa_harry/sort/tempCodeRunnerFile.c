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
        b[k] = a[i];
        k++, i++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}