#include<iostream>
using namespace std;

const int MAX_SIZE = 10;
int top = -1;
int stack[MAX_SIZE];
int queue[MAX_SIZE];
int front=-1;
int rear=-1;

void push(int data) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack is full. You can't insert more elements." << endl;
    } else {
        top++;
        stack[top] = data;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        top--;
    }
}
void peek()
{
    if (top==-1)
    {
        cout << "Stack is empty.";
    }
    else
    {
        cout << stack[top]<< endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);

    cout << "You have pushed these elements onto your stack:" << endl;
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;

    pop();
    pop();

    cout << "After popping:" << endl;
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    /cout << endl;
    cout << "The top element of the stack:";
    peek();

    return 0;
}

