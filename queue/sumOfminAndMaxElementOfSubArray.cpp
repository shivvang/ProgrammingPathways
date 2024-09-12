#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int maxAnsMinOfSubArray(vector<int> &nums, int k)
{
    deque<int> dq;
    deque<int> dq2;
    int ans;

    // processing first k elements

    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && nums[i] >= nums[dq.back()])
        {
            dq.pop_back();
        }

        while (!dq2.empty() && nums[i] >= nums[dq2.back()])
        {
            dq2.pop_back();
        }

        dq.push_back(i);
        dq2.push_back(i);
    }

    ans += nums[dq.front()] + nums[dq2.front()];

    // for remaining elements

    for (int i = k; i < nums.size(); i++)
    {
        // removing out of window elements

        while (!dq.empty() && i - dq.front() >= k)
        {
            dq.pop_front();
        }

        while (!dq2.empty() && i - dq2.front() >= k)
        {
            dq2.pop_front();
        }

        // new element insertion
        while (!dq.empty() && nums[i] >= nums[dq.back()])
        {
            dq.pop_back();
        }

        while (!dq2.empty() && nums[i] >= nums[dq2.back()])
        {
            dq.pop_back();
        }

        dq.push_back(i);
        dq2.push_back(i);

        // answer insertion
        ans += nums[dq.front()] + nums[dq2.front()];
    }
    return ans;
}

int main()
{
    vector<int> v{2, 5, -1, 7, -3, -1, 2};
    int k = 4;
    maxAnsMinOfSubArray(v, k);

    return 0;
}
