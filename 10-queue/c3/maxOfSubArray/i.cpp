#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>
#include <deque>

using namespace std;
vector<int> maxOfSubArray(vector<int> &nums, int k)
{
    deque<int> dq;
    vector<int> ans;
    // first window traverse//^ goal : putting greater element at queue front , if less than front the push 
    for (int i = 0; i < k; i++)
    {
        // * important --> make sure queue front mai greatest element
        // for current element greater, smaller element remove form queue
        while (!dq.empty() && nums[i] >= nums[dq.back()]) //^ avoid if dq empty
        {
            dq.pop_back();
        }
        // inserting index , at back --> need to check by out-of-window
        dq.push_back(i);
    }
    // store first window answer
    ans.push_back(nums[dq.front()]); // M forgot nums[]
    // remaining window ko process
    for (int i = k; i < nums.size(); i++)
    {
        // out of window element ko remove
        if (!dq.empty() && (i - dq.front() >= k)) //^ avoid if dq empty
        {
            dq.pop_front();
        }
        // for current element greater , smaller element remove form queue
        while (!dq.empty() && nums[i] >= nums[dq.back()]) //^ avoid if dq empty
        {
            dq.pop_back();
        }
        // inserting index , at back --> need to check by out-of-window
        dq.push_back(i);
        // current window answer
        ans.push_back(nums[dq.front()]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> res =  maxOfSubArray(arr, k);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    

    return 0;
}
