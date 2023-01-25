#include<stdio.h>
int sst(int n){
    static int var=2;
    printf("%d is the value of static variable ", var);
    var++;
    return n + var;



}
int main (){
//we need to give only constant value to a static variable so that it allocate value before starting of main

    int a, b=50;
    a=sst(b);




    return 0;
}