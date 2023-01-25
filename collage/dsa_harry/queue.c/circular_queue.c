#include <stdio.h>
#include <stdlib.h>
struct queuee
{
    int size;
    int r;
    int f;
    int *arr;
};

int is_full(struct queuee *q)
{

    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}
int is_empty(struct queuee *q)
{

    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}
void enq(struct queuee *q, int value)
{

    if (is_full(q) == 1)
    {
        printf("queue is full !\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = value;
        printf("%d insersion successfull !\n ", value);
    }
}
int deq(struct queuee *q)
{
    int a = -1;
    if (is_empty(q) == 1)

    {
        printf("queue is empty ! \n");
    }
    else
    {

        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
        printf("deq successful \n");
    }
    return a;
}
int main()
{

    struct queuee *q;
    q->size = 4;
    q->arr = (int *)malloc((q->size) * sizeof(int));
    q->f = q->r = 0;
    enq(q,1);
    int s = deq(q);
    printf("%d",s);
}