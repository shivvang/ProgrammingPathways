#include <iostream>
#include <queue>
#include <stack>

using namespace std;
stack<int> stackKun;

void reversingQueue(queue<int> &line)
{
    while (!line.empty())
    {
        int elements = line.front();
        line.pop();

        stackKun.push(elements);
    }

    while (!stackKun.empty())
    {
        int top = stackKun.top();
        stackKun.pop();
        line.push(top);
    }
}

int main()
{

    queue<int> line;
    line.push(3);
    line.push(6);
    line.push(9);
    line.push(2);
    line.push(8);

    reversingQueue(line);

    while (!line.empty())
    {
        cout << line.front() << " ";
        line.pop();
    }

    return 0;
}