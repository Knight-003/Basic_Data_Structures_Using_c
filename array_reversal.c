#include<stdio.h>
#include<string.h>





void swap(int* i, int *j){

    int a;
    a=*i;
    *i=*j;
    *j=a;

    
}


 


int main (){


    int arrr[6]={1,2,3,4,5,6};

    int x=6;

     for (int i = 0; i < 3; i++,x--)
   {
       swap(&arrr[i],&arrr[x]);
   }
   
    for (int i = 0; i < 6; i++)
    {
        printf("%d",arrr[i]);
    }






    return 0;
}