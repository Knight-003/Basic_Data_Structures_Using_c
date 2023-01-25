#include<stdio.h>

int factorial (int number){
    
    

    if (number==0 || number==1)
    {
        return 1;
    }
    
    else{

        return (number*factorial(number-1));


    }

}





int main(){
    int num , y;

   printf("enter a number ");
   scanf("%d", &num);

    y=factorial(num);
    printf("%d", y);//this can also be done by printf(%d, factorial(num));

    return 0;


}