#include <iostream>
#include <queue>
using namespace std;

void interLeave(queue<int> &old)
{
    // new queue
    queue<int> newest;
    int count = 0;
    int sizeKun = old.size() / 2;

    while (count != sizeKun && !old.empty())
    {
        int front = old.front();
        old.pop();
        newest.push(front);
        count++;
    }

    count = 0;

    while (count != sizeKun && !newest.empty())
    {
        // removing element from new and adding back to old

        int newFront = newest.front();
        newest.pop();

        old.push(newFront);

        count++;

        // removing the old element from front and pushing it back after newly added element
        int oldFront = old.front();
        old.pop();

        old.push(oldFront);
    }
    if (sizeKun & 1)
    {
        int lefout = old.front();

        old.pop();

        old.push(lefout);
    }
}

int main()
{

    queue<int> old;
    old.push(10);
    old.push(20);
    old.push(30);
    old.push(40);
    old.push(50);
    old.push(60);
    old.push(70);

    interLeave(old);

    while (!old.empty())
    {
        cout << old.front() << " ";
        old.pop();
    }

    return 0;
}