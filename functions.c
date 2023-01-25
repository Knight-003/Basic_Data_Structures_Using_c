#include <stdio.h>

int function1(int a, int b); // decleration of function
void function3(){
    int x;
    printf("enter a number\n");
    scanf("%d" , &x);
    printf("the function 3 is %d" , x);


}

int takenumber()
{
    printf("enter an integer");
    int i;
    scanf("%d", &i);
    return i; // return is the value that we get in main ....this is function without datatype parameter (mention in copy as argument )
}

void printstar()
{
    int n;
    printf("enter the no. of stars");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        printf("star *\n"); // this is function without return value and with argument
        printf("*\n");
        printf("%c\n", '*');
    }
}


int main()
{
    int h = 2, i = 3, c, e ,z,j;
    
   /* c = function1(h, i);
    printf("%d\n", c); // call of function
    printstar();*/
    z = takenumber(j); // here when we call this function we have to store it in z variable
    printf("%d\n", z);
   // function3(j);

    return 0;
}
int function1(int a, int b)
{ // deffination of function //in this function we have both return value and argument

    return a + b;
}