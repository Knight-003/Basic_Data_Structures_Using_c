#include<stdio.h>
int main ()

{
    int i ,j;//here initiation value is already defined therefore we not need first statement
    printf("enter i and j");
    scanf("%d" , &i);
    scanf("%d" , &j);
    /*for (; i<10 , j< 10 ; i++ , j++ )
    {
        printf("%d , %d\n" , i,j);


    }*/
    
    //for (; i=3, j< 10 ; i++, j++ )
    //{                                                                   // here 2nd statement use to update value
   //     printf("%d , %d\n" , i,j);
        


   // }
    for (int k = 0; k < 5; k++)
    {
        printf("%d",k);
    }
    
    
    return 0;
}