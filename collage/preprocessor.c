#include<stdio.h>
#define MUL(s,t) s*t
#define MAX(a,b)\      
    if (a>b)\
    {\                                                                          
        printf("a is greater\n");\
    }\
    else if (a<b)\
    {\
        printf("b is greater\n");\
    }\
    else\
    printf("equal\n");
    


int main (){

    MAX( 5,6);
    int n= MUL(5,6);
    printf("%d",n);
    
    


 //example of macro









    return 0;
}