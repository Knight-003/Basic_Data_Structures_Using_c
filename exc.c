#include<stdio.h>
int main ()

{
    int maths ,science;
    printf("enter value of maths");
    scanf("%d" ,&maths);
    printf("enter the value of science");
    scanf("%d", &science);
    if (maths>0)
    {
        if (science>0)
        {
            printf("you will get both ");
        }

        else if (science<0)
        {
            printf("you will get maths only");
        }
        
        
    }
    

    else if (science>0)
    {
        if (maths>0)
        {
            printf("you will get both ");
        }

        else if (maths<0)
        {
            printf("you will get science only");
        }
    }

    else{
        printf("void");
    }
    

    return 0;
}