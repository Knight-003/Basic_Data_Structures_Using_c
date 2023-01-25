#include<stdio.h>

int nsum(int a){
    int b=0;

    for (int i = 1; i <= a; )
    {
        
        
        b=b+i;
        i++;
        
    }
    
    return b;
}



int main (){

    int n,s;

    
    printf("enter the number till which you need sum");


    scanf("%d",&n);
    s=nsum(n);
    printf("the sum is %d",s);
    






    return 0;
}