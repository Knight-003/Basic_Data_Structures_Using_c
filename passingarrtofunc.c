#include<stdio.h>

void printstr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
    
    


}







int main()
{
    char my[57] ;
    gets(my);
    printstr(my);
    return 0;





}