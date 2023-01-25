#include<stdio.h>
#include<string.h>
union student 
{
    int id;
    int marks;
    char tit[52];


};






int main()
{


//     union student ram ;
//     ram.id=42;
//     ram.marks=42;
//     printf("%d", ram.id);
//    // gets(ram.tit);
//     //puts(ram.tit);
//     strcpy(ram.tit , "nikhil");
//     puts(ram.tit);
//     return 0;

   



       union student ram ;
    ram.id=42;
    ram.marks=42;
    
   // gets(ram.tit);
    //puts(ram.tit);
    strcpy(ram.tit , "nikhil");
    printf("%d", ram.id);
    puts(ram.tit);
    return 0;


}