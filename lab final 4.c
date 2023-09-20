#include <stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void print();

int items[SIZE], front = -1, rear = -1;

int main()
{

    deQueue();
    enQueue(1);
    enQueue(2);
    enQueue(3);

    print();


    deQueue();


    print();

    return 0;
}

void enQueue(int value)
{
    if (rear == SIZE - 1)
        printf("\nQueue is Full!!");
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        printf("\nIns -> %d", value);
    }
}

void deQueue()
{
    if (front == -1)
        printf("\nQueue is Empty!!");
    else
    {
        printf("\nDel : %d", items[front]);
        front++;
        if (front > rear)
            front = rear = -1;
    }
}


void print()
{
    if (rear == -1)
        printf("\nQueue is Empty!!!");
    else
    {
        int i;
        printf("\nQueue elements are:\n");
        for (i = front; i <= rear; i++)
            printf("%d  ", items[i]);
    }
    printf("\n");
}
