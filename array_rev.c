#include<stdio.h>
void swap (int *i,int* j){

    int a;
    a=*i;
    *i=*j;
    *j=a;


}

int main (){                                                    //array always pass by refrence 
    int arr[]={1,2,3,4,5,6};
    int x=5;
    for (int i = 0; i < 3; i++,x--)
    {
        swap(&arr[i],&arr[x]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d",arr[i]);
    }
    
    
    return 0;
}