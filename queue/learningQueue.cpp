#include <iostream>
using namespace std;
#include <queue>

int main()
{
    queue<int> theVeryFirst;

    theVeryFirst.push(10);
    theVeryFirst.push(15);
    theVeryFirst.push(12);
    theVeryFirst.push(14);

    cout << theVeryFirst.size() << endl;

    theVeryFirst.pop();

    cout << theVeryFirst.size() << endl;

    cout << theVeryFirst.front() << endl;

    cout << theVeryFirst.back() << endl;

    theVeryFirst.empty() ? true : false;

    return 0;
}