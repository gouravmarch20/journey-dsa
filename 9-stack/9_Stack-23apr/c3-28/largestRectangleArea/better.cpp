#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>
#include <deque>

using namespace std;

vector<int> prevSmaller(vector<int> &heights)
{

    stack<int> st;
    vector<int> ans;
    int n = heights.size();
    for (int i = 0; i < n; i++)
    {
        int elem = heights[i];
        // M miss while loop --> used if case
        // & equal to sign
        while (!st.empty() && heights[st.top()] >= elem)
        {
            st.pop();
        }
        int res = st.empty() ? -1 : st.top(); //^ need to push index if small element found --> if continues 2 element greater then ==> ans array mai wrong index assign ==> so stack to pop greater if smaller then return index
        st.push(i);                           //^ have current index , for upcoming ops
        // ans[i] = res;//M not allow in cpp
        ans.push_back(res);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return ans;
}
vector<int> nextSmaller(vector<int> &heights)
{

    stack<int> st;
    vector<int> ans;
    int n = heights.size();
    //
    for (int i = n - 1; i >= 0; i--)
    {
        // M if block using not while
        while (!st.empty() && heights[st.top()] > heights[i])
        {
            st.pop();
        }
        int res = st.empty() ? n : st.top(); // M -> for push in ans array ==> top value of stack
        ans.push_back(res);                  //^ how at last mai assign
        st.push(i);
    }
    reverse(ans.begin(), ans.end()); // NOTE: after push_back
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return ans;
}
int largestRectangleArea(vector<int> &heights)
{
    int res = 0;
    vector<int> ps = prevSmaller(heights);
    cout << endl;
    vector<int> ns = nextSmaller(heights);
    // int n = heights.size();
    // for (int i = 0; i < n; i++)
    // {
    //     int curr = heights[i] * (ns[i] - ps[i] - 1);
    //     res = max(curr, res);
    // }
    return res;
}

int main()
{
    vector<int> heights = {1 , 1};
    int r = largestRectangleArea(heights);
    // cout << "the result is " << r;
    return 0;
}
