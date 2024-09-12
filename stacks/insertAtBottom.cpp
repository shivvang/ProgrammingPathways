#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int &target)
{
    // base case
    if (s.empty())
    {
        s.push(target);
        return;
    }

    int temp = s.top();
    s.pop();

    // recursive calls
    insertAtBottom(s, target);

    // backtracking
    s.push(temp);
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(15);
    s.push(27);
    s.push(32);

    int target = 11;

    insertAtBottom(s, target);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}