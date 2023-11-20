#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int longestValidParentheses(string s)
{
    stack<int> st;
    int maxPar = 0;
    st.push(-1); //^ safe stack form empty and for count length
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(')
        {
            st.push(i);
        }
        else
        {
            st.pop();
            if (st.empty())
            {
                st.push(i);
            }
            else
            {
                maxPar = max(maxPar, i - st.top());
            }
        }
    }
    return maxPar;
};

int main()
{
    string s = ")()())";
    int res = longestValidParentheses(s);
    cout << res << endl;
    return 0;
}
