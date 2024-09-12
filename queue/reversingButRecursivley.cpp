#include <iostream>
#include <queue>
using namespace std;

void recursivelyDoingStuff(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }

    int front = q.front();
    q.pop();

    recursivelyDoingStuff(q);
    q.push(front);
}

int main()
{
    queue<int> q;

    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    recursivelyDoingStuff(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}