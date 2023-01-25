#include<stdio.h>
void ret(char*ptr){

    printf("%s",ptr);

}

int main (){

    char v[]="nikhil";

    char *c="anand";
    ret(v);
    ret(c);


    
    return 0;
}