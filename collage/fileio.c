#include<stdio.h>

int main (){
    
    // ******************READING MODE ***************************
     FILE *ptr=NULL;
    //char str[64];
    // ptr = fopen("read.txt","r");
    // fscanf(ptr,"%s",str);
    // printf("%s",str);
    //***************************************************************



    //*******************write mode*****************************
    // char str2[]=" Write your name ";
    // ptr = fopen("read.txt","w");
    // fprintf(ptr,"%s",str2);
    //*************************************************

    char str3[]=" my name is nikhil ";

    ptr = fopen("read.txt","a");
    fprintf(ptr,"%s",str3);


    return 0;
}