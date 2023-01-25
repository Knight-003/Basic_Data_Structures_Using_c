#include<stdio.h>
int main(){


    int matks[2][3] ={{4,5,6},
    
                    {5,6,7}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The value in 2d matrix is %d , %dis %d\n" ,i,j ,matks[i][j] );
        }
        
    }

    return 0;
    





}