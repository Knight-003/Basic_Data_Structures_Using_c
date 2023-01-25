#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void circular_traversal(struct node *head)
{

    struct node *temp = head;

    do
    {
        printf("%d", temp->data);
        temp = temp->next;

    } while (temp != head);
}
struct node *cir_ins_head(struct node *hd, int data)
{
    struct node *fr = hd;

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    struct node *q = hd;
    while (q->next != hd)
    {
        q = q->next;
    }
    hd = temp;
    temp->next = fr->next;
    q->next = hd;
    free(fr);
    return hd;
}
struct node * delete_head(struct node * head ){

    struct node * fr = head ;
    struct node * q = head;
    struct node * last_nd_pr= head->next;
    
    while (q->next != head)

    {

        q= q->next;
        
    }
    


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
    fourth->next = head;

    circular_traversal(head);
    head = cir_ins_head(head, 99);
    printf("\n");
    circular_traversal(head);

    return 0;
}