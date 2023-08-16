#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

void print(stack<char> st)
{

    stack<char> tempStack = st;

    while (!tempStack.empty())
    {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;
}
string removeDuplicates(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else if (st.top() == s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    int i = 0;
    string ans;

    while (!st.empty())
    {
        ans += st.top(); // NOTE:
        st.pop();
    }
    reverse(ans.begin(), ans.end()); // NOTE: BEGIN , REVERSE WORK
    return ans;
};

int main()
{
    string s = "abbaca";
    string res = removeDuplicates(s);
    for (int i = 0; i < res.length(); i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}
