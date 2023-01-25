#include<stdio.h>
char* ret(){


    return "string returned";
}

int main (){
    char *str;
    str=ret();
    printf("%s",str);
    return 0;
}