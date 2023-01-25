#include<stdio.h>
int main ()

{
    int a , b;
    printf("enter your age ");

     scanf("%d" , &a);

      printf("enter your marks ");

     scanf("%d" , &b);
     
     switch(a){

         case 8: {

             switch (b)
             {
             case 20:{
                 printf("your marks is 20");
             }
                 
                 break;
             
             default:{
                 printf("we cant consider your marks ");
             }
                 
             }




        break;
         }
        
        case 9:{
            printf("your age is 9");
            break;
        }

        default:{
            printf("your age is not 8 or 9 ");
        }

        // if we dont apply break then code will execute all codes and print the default statement also 
        // we not need to put break on default
     }

    return 0;
}
