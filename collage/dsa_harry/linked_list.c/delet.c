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
struct node *delete_front(struct node *head)
{

    struct node *temp = head;
    head = temp->next;
    free(temp);
    return (head);
}
void delete_last(struct node *head)
{

    struct node *ptr = head;
    while ((ptr->next)->next != NULL)
    {

        ptr = ptr->next;
    }
    struct node *fr;
    fr = ptr->next;
    ptr->next = NULL;
    free(fr);
}
void delete_mid_by_index(struct node *head, int index)
{

    struct node *temp = head;
    int i = 0;

    while (i < index)

    {
        temp = temp->next;
        // printf("%d",i);
        i = i + 1;
    }
    struct node *fr = temp->next;
    temp->next = fr->next;
    free(fr);
}
void delete_from_pointer(struct node *ptr_pre)
{

    struct node *temp = ptr_pre;
    struct node *fr = ptr_pre->next;
    ptr_pre->next = fr->next;
    free(fr);
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

    // head = delete_front(head);
    // arraytrav(head);
    // printf(".......................");
    // delete_last(head);
    // arraytrav(head);
    // arraytrav(head);
    // printf("\n");
    // delete_mid_by_index(head, 1); // this is the index before element to need to delete

    arraytrav(head);
    printf("\n");
    delete_from_pointer(second);// this is the pointer before element to need to delete
    arraytrav(head);


    return 0;
}
