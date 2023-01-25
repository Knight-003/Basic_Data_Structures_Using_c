#include <stdio.h>
#include <stdlib.h>

struct node_double
{

    int data;
    struct node_double *previous;
    struct node_double *next;
};
struct node_double * add_first(struct node_double *head, int value)
{

    struct node_double *ptr;
    ptr = (struct node_double *)malloc(sizeof(struct node_double));
    ptr->data = value;
    ptr->next = head;
    ptr->previous = NULL;
    head = ptr;
    return head;
}

void add_inside(struct node_double *head, int value, int index)
{

    int count = 0;
    int temp = index - 1;
    struct node_double *ptr = (struct node_double *)malloc(sizeof(struct node_double));
    struct node_double *ptr_previous;
    struct node_double *ptr_next;
    while (count < temp)
    {
        ptr_previous = head->next;
        ptr_next = (ptr_previous)->next;
        count = count + 1;
    }
    ptr->data = value;
    ptr->next = ptr_next;
    ptr->previous = ptr_previous;

    ptr_previous->next = ptr;
    ptr_next->previous = ptr;
}
void arraytrav(struct node_double *last)
{
    while (last != NULL)
    {

        printf("element is %d\n", last->data);

        last = last->previous;
    }
}



int main(){

    struct node_double *head;
    struct node_double *second;
    struct node_double *third;
    struct node_double *fourth;

    head = (struct node_double *)malloc(sizeof(struct node_double));
    second = (struct node_double*)malloc(sizeof(struct node_double));
    third = (struct node_double *)malloc(sizeof(struct node_double));
    fourth = (struct node_double *)malloc(sizeof(struct node_double));
    head->data = 1;
    head->next=second;
    head->previous=NULL;

    second->data =2;
    second->next = third;
    second->previous = head;
    
    third->data =3;
    third->next = fourth;
    third->previous = second;

    fourth->data =4;
    fourth->next = NULL;
    fourth->previous =third ;

    arraytrav(fourth);
    add_inside(head, 122, 2);
     arraytrav(fourth);

    

}