#include <stdio.h>
#include <stdlib.h>

struct queuee
{

    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct queuee *q)
{

    if (q->r == (q->size - 1))
    {

        return 1;
    }
    return 0;
}
int isempty(struct queuee *q)
{

    if (q->r == q->f)
    {

        return 1;
    }
    return 0;
}

void enqueue(struct queuee *q, int num)
{

    if (isfull(q))
    {

        printf("queue is full");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = num;
        printf("enqueued %d\n", num);
    }
}

int dequeued(struct queuee *q)
{
    int a = -1;

    if (isempty(q))
    {
        printf("que is empty");
        return a;
    }
    else
    {

        q->f = q->f + 1;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{

    struct queuee *q;
    q->size = 5;
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * (sizeof(int)));
    enqueue(q, 12);
    enqueue(q, 15);
    enqueue(q, 12);
    enqueue(q, 16);
    enqueue(q, 18);
    enqueue(q, 8);




    
    printf("Dequeuing element %d\n", dequeued(q));
    printf("Dequeuing element %d\n", dequeued(q));
    printf("Dequeuing element %d\n", dequeued(q));
    printf("Dequeuing element %d\n", dequeued(q));
    printf("Dequeuing element %d\n", dequeued(q));
    printf("Dequeuing element %d\n", dequeued(q));
}