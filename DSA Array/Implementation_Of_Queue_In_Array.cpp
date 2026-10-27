#include<iostream>
using namespace std;

const int MAX_SIZE = 3;
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if ((rear + 1) % MAX_SIZE == front)
    {
        cout << "Queue is full. You can't insert data." << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = data;
        cout << "First data inserted in queue is: " << data << endl;
    }
    else
    {
        rear = (rear + 1) % MAX_SIZE;
        queue[rear] = data;
        cout << data << " is inserted in the queue." << endl;
    }
}

void deque()
{
    if (front == -1 && rear == -1)
    {
        cout << "The Queue is empty. Nothing for Dequeue" << endl;
    }
    else if (front == rear)
    {
        cout << "Last element dequeued from queue is: " << queue[front] << endl;
        front = rear = -1;
    }
    else
    {
        cout << queue[front] << " is dequeued." << endl;
        front = (front + 1) % MAX_SIZE;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
        cout << "Nothing in the deque." << endl;
    else
        cout << "Top element of the queue is: " << queue[front] << endl;
}

int main()
{
    enqueue(50);
    enqueue(40);
    enqueue(60);

    deque();
    deque();
    deque();
     enqueue(70);
    peek();

    return 0;
}
