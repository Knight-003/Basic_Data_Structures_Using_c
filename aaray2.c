#include<stdio.h>
int main(){

    int marks[4/*in this type we can exclude the 4*/] = {45,6,25,22};
    for (int i = 0; i < 4; i++)//this is called decleration with initialization

    {
       printf("the marks are %d\n", marks[i]);
    }
    


 return 0;




}