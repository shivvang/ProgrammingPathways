#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int size; // length of stack
    int Top;  // serve as index for stack

    // dynamically creates an array
    stack(int size)
    {
        arr = new int[size];
        this->size = size;
        Top = -1;
    }

    // replicating some of the common methods of stack

    // pushing element to the top (push)
    void push(int data)
    {
        if (size - Top > 1)
        {
            Top++;
            arr[Top] = data;
        }
        else
        {
            cout << "stack overflow ho rha hai birrro";
        }
    }

    // removing element from the top (pop)
    void pop()
    {
        if (Top == -1)
        {
            cout << "underflow baby kuch nahi hai dont delete anything anymore";
        }
        else
        {
            Top--;
        }
    }

    // peeking at the Top of element
    int peek()
    {
        if (Top == -1)
        {
            cout << "there is nothing in here";
        }
        else
        {
            return arr[Top];
        }
    }

    // getting to know the no of valid element inside the stack
    int getSize()
    {
        return Top + 1;
    }

    // whether the given stack is empty or not
    bool isEmpty()
    {
        if (Top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.isEmpty())
    {
        cout << s.peek() << " ";
        s.pop();
    }
    cout << endl;

    s.pop();
    return 0;
}