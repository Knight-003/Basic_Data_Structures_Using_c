#include<stdio.h>
#include<stdlib.h>
struct employ
{
    int companyid;
    

};


int main (){
    

    int s;
    char *ptr;
    printf("enter the number of character in yor id");
    scanf("%d",&s);
    ptr=(char*)malloc(s*sizeof(char));
    
  
    int n=0;
    
    
    while (n<4)
    {
        printf("enter the employ id");
        scanf("%s",ptr);
        printf("the employ id is %s ",ptr);
        
        n=n+1;
    }
    





    return 0;
}