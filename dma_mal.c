#include<stdio.h>
#include<stdlib.h>
int main (){
    int n;
    printf("enter the no. of character you want to enter ");
    scanf("%d",&n);
    char * ptr;
    ptr = (char*) malloc(n*sizeof(char));
    for (int i = 0; i < n; i++)
    {
        printf("enter %d\n",(i+1));
        scanf(" %c", (ptr+i));
    }
    free(ptr);
    return 0;
}