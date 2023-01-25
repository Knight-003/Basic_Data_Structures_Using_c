#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char tit[52];
};

int main()
{

    struct student ram;
    ram.id = 42;
    ram.marks = 42;
    printf("%d", ram.id);
    // gets(ram.tit);
    // puts(ram.tit);
    strcpy(ram.tit, "nikhil");
    puts(ram.tit);
    return 0;
}