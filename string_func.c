#include<stdio.h>
#include<string.h>
int main (){
    int g;
    char s[54];
    char y[]=" is the best ";
    scanf("%d",&s);
    puts(strcat(s,y));


    
    char str[100];
    scanf("%s",&str);
    printf("%d",strlen(str));


    char str1 [54];

    char str2[]="nikhil";
    strcpy(str1 , str2);
    puts(str2);
    // we can also directly copy a string using strcpy
    //strcpy(str2 , "hello nikhils")





    char str3[]="nikhil";
    char str4[]="thor";

    printf("the value of difference is %d\n",strcmp(str3,str4));
    printf("the value of difference is %s",strrev(str3));

    
 



    return 0;
}