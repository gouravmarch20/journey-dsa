#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<int> findNextSmaller(stack<int> st, vector<int> v)
{
    vector<int> ans(v.size());

    //
    for (int i = v.size() - 1; i >= 0; i--)
    {
        int curr = v[i];
        // answer stack
        while (st.top() >= curr)
        {
            st.pop();
        }
        // chotta element found
        ans[i] = st.top();
        st.push(curr); //^ if currently is smaller , upcoming include this
    }
    return ans;
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    stack<int> st;
    st.push(-1); //^ right most answer

    vector<int> ans = findNextSmaller(st, v);
    cout << "answer printing ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
