
#include<stdio.h>
int main ()

{
    int maths ,science;
    
    printf("enter value of maths");

    scanf("%d" ,&maths);

    printf("enter the value of science");

    scanf("%d", &science);

    if (maths==0 && science ==1)
    {
      
        printf("you got science");
        
    }
    

    else if (science==0 && maths==1)
    {
        printf("you got maths");
    }

   else if (science==0 && maths == 0)
   {
       printf("you got nothing");
   }
   
   else if (science==1 && maths== 1)
   {
       printf(" you got both ");
   }
   

    return 0;
}