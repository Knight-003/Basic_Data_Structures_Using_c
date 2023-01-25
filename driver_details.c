#include<stdio.h>
struct driver
{
    char name [52]  ;
    int id;

    int vehical_no;
    
};


int main (){

    int n;
    printf("enter the no. of drivers\n");
    scanf("%d",&n);
    struct driver drv[n];
    typedef  struct driver sdr;
    
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d",i);
        scanf("%s",&drv[i].name);
        scanf("%d",&drv[i].vehical_no);
        drv[i].id =i;
    }
    

    printf("enter id to access the details");
    int s;
    scanf("%d",&s);
    printf("the name of driver is %s\nthe id is %d\nthe vehical number is%d\n",drv[s].name,drv[s].id,drv[s].vehical_no);
    








    return 0;
}