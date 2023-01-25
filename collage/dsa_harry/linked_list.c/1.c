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

int main()
{


    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
  head->data = 1;
  head->next = second;
  second ->data = 2;
  second->next = third;
  third->data = 3;
  third->next = fourth;
  fourth->data = 4;
  fourth->next = NULL;

    arraytrav(head);




    return 0;
}