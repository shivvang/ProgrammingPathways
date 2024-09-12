#include <iostream>
using namespace std;

class circularQueue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    circularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    // implementation of push
    void push(int val)
    {
        // case where queue is full
        if (front == 0 && rear == size - 1)
        {
            cout << "no more element can be inserted my boii" << endl;
        }

        // another case of full

        else if (rear == front - 1)
        {
            cout << "bhara hua hai abhi bhi" << endl;
        }

        // case where we are about to add our very first element
        else if (front == -1)
        {
            front == rear = 0;
            arr[rear] = val;
        }

        // circular nature of queue
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }

        // normal case
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    void pop()
    {
        // empty from  the get go
        if (front == -1)
        {
            cout << "khali hai pehle se hi pagal aadmi" << end;
        }

        // removal of single element
        else if (front == rear)
        {
            front = rear = -1;
        }

        // keeping up the circluar nature of queue
        else if (front == size - 1)
        {
            front = 0;
        }

        // normal removal
        else
        {
            front++;
        }
    }
};

int main()
{

    return 0;
}