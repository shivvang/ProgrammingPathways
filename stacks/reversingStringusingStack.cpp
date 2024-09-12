#include <iostream>
#include <stack>
using namespace std;

int main()
{

    string s = "shilaaaaaa";
    stack<char> stuck;

    for (int i = 0; i < s.length(); i++)
    {
        stuck.push(s[i]);
    }

    while (!stuck.empty())
    {
        cout << stuck.top() << " ";
        stuck.pop();
    }

    return 0;
}