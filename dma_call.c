#include<stdio.h>
#include<stdlib.h>

int main (){
    int n;
    int*ptr;
    printf("enter the no. of elements you want to store");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("enter the numbers");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
    }
    for (int i = 0; i < n; i++)
    {
       printf("the value is %d\n",*(ptr+i));
    }

    //we are adding sone more space 
    int s;
    printf("enter the space which you want to add ");
    scanf("%d",&s);
    
    ptr=(int*)realloc(ptr,s*sizeof(int));
    for (int i = n; i < s; i++)
    {
        scanf("%d",(ptr+i));
    }
    for (int i = 0; i < s; i++)
    {
       printf("the value is %d\n",*(ptr+i));
    }

    
    
    return 0;
}