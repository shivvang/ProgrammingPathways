#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// stack<int> finalized;

// void nextSmallest(int i, vector<int> &arr, stack<int> &finalized)
// {
//     // base case (reached the end of array)
//     if (i == arr.size())
//     {
//         return;
//     }

//     int nextElement = arr[i + 1];

//     nextSmallest(i + 1, arr, finalized);

//     // after we hit base this will take over
//     if (arr[i] > nextElement)
//     {
//         finalized.push(nextElement);
//     }
//     else
//     {
//         finalized.push(-1);
//     }
// }

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(3);

    stack<int> s;
    s.push(-1);

    vector<int> ans(arr.size());

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int curr = arr[i];

        while (s.top() >= curr)
        {
            s.pop();
        }

        ans[i] = s.top();
        s.push(curr);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    // int iterator = 0;
    // nextSmallest(iterator, arr, finalized);

    // while (!finalized.empty())
    // {
    //     cout << finalized.top() << " ";

    //     finalized.pop();
    // }

    return 0;
}