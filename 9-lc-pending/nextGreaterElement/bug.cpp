//TODO: HOW TO DEBUG IF IT safe form 80% test , the only place it is falling in Leetcode very large test case 


#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>
#include <deque>
#include <unordered_map>


using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{

    unordered_map<int, int> umap;
    stack<int> st;
    int n = nums2.size();

    for (int i = n - 1; i >= 0; i--)
    {
        int ele = nums2[i];
        if (!st.empty() && st.top() <= ele)
        {
            st.pop();
            // st.push(ele);
        }
        // while (!st.empty() && st.top() <= ele)
        // {
        //     st.pop();
        //     // st.push(ele);
        // }
        int res = st.empty() ? -1 : st.top(); 
        // umap[ele] = res;
        umap.insert({ele , res});

        st.push(ele); 
    }

    vector<int> ans;

    for (auto val : nums1)
    {
        ans.push_back(umap[val]);
    }

    return ans;
}

int main()
{
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    nextGreaterElement(nums1, nums2);
    return 0;
}
