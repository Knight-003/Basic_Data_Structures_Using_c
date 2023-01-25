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
int is_full(struct stack *ptr)
{
    if (ptr->top == (ptr->size)-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *ptr, int n)
{
    if (is_full(ptr))
    {
        printf("stack overflow");
    }
    else
    {

        
        ptr->top = ptr->top + 1;

        ptr->arr[ptr->top] = n;
    }
}
int pop(struct stack *ptr)
{
    if (is_empty(ptr))
    {
        printf("stack is empty");
        return -123123;
    }
    else
    {
        int rt = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return rt ;
    }
    
}

int main()
{
    struct stack *s;
    s->size = 50;
    s->top = -1;

    s->arr = (int *)malloc((s->size) * sizeof(int));

    printf("is empty %d\n", is_empty(s));
    push(s, 66);
    push(s, 77);
    push(s, 88);
    push(s, 99);
    push(s, 100);
    printf("is empty %d\n", is_empty(s));
    printf("%d",pop(s));
    printf("%d",pop(s));
   

    
    
}