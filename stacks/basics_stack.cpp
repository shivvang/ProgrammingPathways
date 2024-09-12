#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> st;
    // adding elements

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // removing element

    // st.pop();

    // checking the size of stack

    // cout << st.size() << endl;

    // checking whether it is empty or not
    // cout << st.empty() ? "khali hai" : "bhara hua hai";

    // looping through stack but stack doesnt have index and it follows last in first out principle
    while (!st.empty())
    {
        cout << st.top() << "endl";
        st.pop();
    }

    return 0;
}