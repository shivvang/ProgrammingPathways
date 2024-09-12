#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }

    if (s.top() >= target)
    {
        s.push(target);
        return;
    }

    int TopElement = s.top();
    s.pop();

    insertSorted(s, target);

    s.push(TopElement);
}

void SortingStack(stack<int> &s)
{
    // base case
    if (s.empty())
    {
        return;
    }

    int TopMost = s.top();
    s.pop();

    SortingStack(s);

    insertSorted(s, TopMost);
}

int main()
{
    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    SortingStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}