#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <algorithm>
using namespace std;

unordered_map<int, int> nextGreater(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> umap;
    stack<int> st;
    vector<int> res(n);
    res[n - 1] = -1;
    //^ last ko prefill
    umap[nums[n - 1]] = -1;
    st.push(nums[n - 1]);
    //^ so we can start with -2
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() && st.top() < nums[i])
        {
            st.pop();
        }
        if (st.empty())
            res[i] = -1;
        else
            res[i] = st.top();
        umap[nums[i]] = res[i];
        st.push(nums[i]);
    }

    return umap;
}

vector<int> nextGreaterElement(const vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> res = nextGreater(nums2);
    vector<int> ans;

    for (int num : nums1)
    {
        ans.push_back(res[num]);
    }

    return ans;
}

int main()
{
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> result = nextGreaterElement(nums1, nums2);

    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}
