#include<stdio.h>
#define MAX 5

int queue[MAX];
int front=-1;
int rear=-1;

void insert(int);
void display();
int del();

void insert(int element)
{
    if(rear == MAX-1)
    {
        printf("Queue is FULL\n");
        return;
    }
    if(front == -1)
    {
        front = 0;
    }
    rear = rear+1;
    queue[rear] = element;
}

int del()
{
    int element;
    if(front==-1 || front==rear+1)
    {
        printf("Queue is Empty\n");
    }
    element = queue[front];
    front = front+1;
    return element;
}

void display()
{
    if(front == -1 || front == rear+1)
    {
        printf("Queue is Empty\n");
    }
    int i;
    for(i = front; i<=rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}

void main()
{
    insert(10);
    insert(11);
    insert(12);
    insert(13);
    insert(14);
    insert(15);
    display();
    //printf("Delete\n");
    //del();
    //display();
}
