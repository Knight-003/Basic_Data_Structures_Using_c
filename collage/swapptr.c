#include <stdio.h>

void swap(int *a, int* b)
{

    int t;
    t = *a;
    *a = *b;
    *b = t;
    // printf("%d%d",* a,* b);
}

int main()
{
    // int x, y;
    // printf("enter thr number to swap\n");
    // scanf("%d",&x);
    // scanf("%d",&y);

    // swap(&x,& y);
    // printf("2nd print %d%d",x,y);
    // return 0;
    int arr[]={2,3};
    swap(&arr[0],&arr[1]);
    printf("%d",arr[0]);

    
}