class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            unordered_map<int, int> umap;
    stack<int> st;
    int n = nums2.size();
    //! m1 : miss == sign ==>  i >= 0
    //^ m2 : i = nums2.size() - 2 ==>
    for (int i = n - 1; i >= 0; i--)
    {
        int ele = nums2[i]; // IMPROVED -> REPETITION AVOID
        // !m3 : miss equal to sign -> st.top() <= ele
        while (!st.empty() && st.top() <= ele)
        {
            st.pop();
            // st.push(ele);
        }
        int res = st.empty() ? -1 : st.top(); // M4 -> unable to think
        umap[ele] = res;

        st.push(ele); //^ we alway add current ele in stack
    }

    vector<int> ans;
    // ^ can use auto
    for (auto val : nums1)
    {
        ans.push_back(umap[val]);
    }

    return ans;
    }
};