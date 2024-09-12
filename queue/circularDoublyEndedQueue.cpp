#include <iostream>
using namespace std;

class Dequeue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Dequeue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    void push_back(int val)
    {
        // whether the queue is already  full or not
        if (front == 0 && rear == size - 1)
        {
            cout << "no more element" << endl;
        }
        // circular nature
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            return;
        }
        // there is another possibliltiy of queue getting full when rear reach right before front
        else if (rear == front - 1)
        {
            cout << "its full " << endl;
        }

        else if (front == -1)
        {
            front = rear = 0;
            return
        }

        // normally how you add stuff
        else
        {
            front++;
            return;
        }

        arr[front] = val;
    }

    void push_front(int val)
    {
        // full
        if (front == 0 && rear == size - 1)
        {
            cout << "full horkha hai" << endl;
        }
        // very first element addittion
        else if (front == -1)
        {
            front = rear = 0;
            return
        }
        // circular nature
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
            return
        }
        // another case of full queue
        else if (front = rear + 1)
        {
            cout << "bas kar yaar" << endl;
        }

        else
        {
            front--;
        }

        arr[front] = val;
    }

    void pop_front()
    {
        if (front == -1)
        {
            cout << "not today my boii its very early" << endl;
        }
        // single element removal
        else if (front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }
        // circular nature
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }

    void pop_back()
    {
        if (rear == -1)
        {
            cout << "not today my boii its very early" << endl;
        }
        // single element removal
        else if (front == rear)
        {
            arr[rear] = -1;
            front = rear = -1;
        }
        // circular nature
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
    }
};

int main()
{

    return 0;
}