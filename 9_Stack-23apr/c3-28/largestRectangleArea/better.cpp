#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>
#include <deque>

using namespace std;

void prevSmaller(vector<int> &heights)
{
    stack<int> st;
    vector<int> res;
    for (int i = 0; i < heights.size(); i++)
    {
        if (!st.empty() && st.top() > heights[i])
        {
        }
        st.push(i);
        // res[i] =
    }
}
void nextSmaller(vector<int> &heights)
{
    //M stack of index --> to keep track
    stack<int> st;
    vector<int> res;
    int n = heights.size();
    //
    res[n - 1] = n;
    st.push(heights[n-1]);
    for (int i = heights.size() - 2; i >= 0; i--)
    {
        if (!st.empty() && st.top() > heights[i])
        {
            st.pop();
            st.push(heights[i]);
        }
        int res = st.empty() ? n : heights[i];
        st.push(res);
    }
}
int largestRectangleArea(vector<int> &heights)
{
    prevSmaller(heights);
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    largestRectangleArea(heights);
    return 0;
}
