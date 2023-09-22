#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<int> findPrevSmaller(stack<int> st, vector<int> v)
{
    vector<int> ans(v.size());

    //
    for (int i = 0; i < v.size(); i++)
    {
        while (v[i] < st.top())
        {
            st.pop();
        }

        ans[i] = st.top();
        st.push(v[i]);
    }
    return ans;
}
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(2);
    v.push_back(5);
    stack<int> st;
    st.push(-1); //^ right most answer

    //

    //
    vector<int> ans = findPrevSmaller(st, v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
