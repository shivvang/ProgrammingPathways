#include <iostream>
using namespace std;

class queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    queue(int size)
    {
        this->size == size;
        arr = new int[size];
        this->front = 0;
        this->rear = 0;
    }

    // implementation of push
    void push(int data)
    {
        if (rear == size)
        {
            cout << "q is full my boii" << endl;
        }

        arr[rear] = data;
        rear++;
    }

    // implementation of pop

    void pop()
    {
        if (front == rear)
        {
            cout << "cant remove any more element" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            cout << arr[front] << endl;
        }
    }

    bool isEmpty()
    {
        (front == rear) ? true : false;
    }

    int getSize()
    {
        return rear - front;
    }
};

int main()
{
    queue q(10);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << q.getSize() << endl;

    q.pop();

    cout << q.getSize() << endl;

    cout << q.isEmpty() << endl;

    cout << q.getFront() << endl;

    return 0;
}