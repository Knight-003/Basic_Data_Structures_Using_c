#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node *TOP = NULL;

struct node
{
    int data;
    struct node *next;
};
void arraytrav(struct node *hdp)
{
    while (hdp != NULL)
    {

        printf("element is %d\n", hdp->data);

        hdp = hdp->next;
    }
}
int is_empty(struct node *ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }

    return 0;
}
int is_full()
{

    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {

        return 1;
    }
    free(p);

    return 0;
}

void push(struct node *ptr, int n)
{

    if (is_full(ptr) == 1)
    {
        printf("stack over flow");
    }

    else
    {

        struct node *st = (struct node *)malloc(sizeof(struct node));
        st->data = n;
        st->next = TOP;
        TOP = st;
    }
}
int pop(struct node *ptr)
{

    struct node *y = ptr;
    int rt = ptr->data;
    TOP = ptr->next;
    free(y);
    return rt;
}
int peak(struct node *ptr, int n)
{

    struct node *y = ptr;

    for (int i = 0; (i < (n - 1) && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1; // for any potential error
    }
}

int pree(struct node *ptr)
{

    if (ptr != NULL)
    {
        return ptr->data;
    }
}

int end(struct node *ptr)
{

    struct node *tr = ptr;
    if (ptr == NULL)
    {
        printf("stack underflow");
        return -1;
    }
    else
    {

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        return ptr->data;
    }
}
int main()
{
    push(TOP, 88);
    push(TOP, 99);
    push(TOP, 77);
    push(TOP, 11);
    arraytrav(TOP);
    int s = pop(TOP);
    printf("\n");
    arraytrav(TOP);
    printf("\n");
    printf("%d", peak(TOP, 6));
    printf("\n");
    printf("%d", pree(TOP));
    printf("%d", end(TOP));
    char *p= "hellow ";
    printf("%c", p[0]);

    return 0;
}