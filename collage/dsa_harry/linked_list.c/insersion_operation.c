#include <stdio.h>
#include <stdlib.h>

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
struct node *addatfirst(struct node *head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    head = ptr;
    return head;
}
struct node *addbetween(struct node *head, int index, int data)
{

    int t = 0;
    struct node *copy_h = head;
    int temp = index - 1;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    while (t < temp)

    {
        copy_h = copy_h->next;
        t = t + 1;
    }
    ptr->next = copy_h->next;
    copy_h->next = ptr;
    ptr->data = data;
    return head;
}
struct node *addlast(struct node *head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = NULL;
    return head;
}
void addbypointer(struct node *target_plc, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = target_plc->next;
    target_plc->next = ptr;
    
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = NULL;

    // arraytrav(head);
    // head = addatfirst(head, 55);
    // arraytrav(head);
    // head = addbetween(head, 2, 65);
    // arraytrav(head);
    // head = addlast(head, 555555);
    // arraytrav(head);
     addbypointer(fourth,88);
    arraytrav(head);


    return 0;
}