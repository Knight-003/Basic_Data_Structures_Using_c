#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int is_empty(struct stack *ptr)
{
    if (ptr->top < 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    struct stack *s;
    s->size = 50;
    s->top = -1;

    s->arr = (int *)malloc((s->size) * sizeof(int));

    printf("is empty %d", is_empty(s));
    
}