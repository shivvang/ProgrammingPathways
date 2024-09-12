#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int *arr;

    //
    int start;   // iterator for left section of arrray
    int initial; // iterator for right section of arrray

    stack(int size)
    {
        arr = new int[size];
        this->size = size;
        int start = -1;
        int initial = size;
    }

    // implementation of push and pop for two of the stack
    void push1(int data)
    {
        if (initial - start == 1)
        {
            cout << "no more element it can sustain for stack 1 were talking about" << endl;
        }
        else
        {
            start++;
            arr[start] = data;
        }
    }

    void push2(int data)
    {
        if (initial - start == 1)
        {
            cout << "no more element it can sustain for stack 2 were talking about" << endl;
        }
        else
        {
            initial--;
            arr[initial] = data;
        }
    }

    // pop logic for both cases
    void pop1()
    {
        if (start == -1)
        {
            cout << "no more stuff left to delete my boii(stack 1)" << endl;
        }
        else
        {
            start--;
        }
    }

    void pop2()
    {
        if (initial == size)
        {
            cout << "bro stop get some help(stack 2)" << endl;
        }
        else
        {
            initial++;
        }
    }

    void print()
    {
        cout << "pointer at left side:" << start << endl;
        cout << "pointer at right side:" << initial << endl;

        cout << endl;

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }

        cout << endl;
    }
};

int main()
{
    stack s(10);

    s.push1(10);
    s.print();

    s.push1(20);
    s.print();

    s.push1(30);
    s.print();

    s.push1(40);
    s.print();

    s.push1(60);
    s.print();

    s.push2(70);
    s.print();

        return 0;
}