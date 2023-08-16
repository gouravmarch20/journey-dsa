#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool checkRedundancy(string &s)
{
    stack<char> st;
    bool isOperator = false;

    for (int i = 0; i < s.length(); i++)
    {

        char ch = s[i];
        if (ch == '(')
        {
            st.push(ch);
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        // !m1 : forgot ignore --> alphabet
        else if (ch == ')')
        {

            // if (st.empty())
            // {
            //     return false;
            // }
            while (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
            {
                isOperator = true;
                st.pop();
            }
            if (!isOperator)
            {
                return true;
            }

            st.pop();
            isOperator = false;
        }
    }

    return false;
};

int main()
{
    string s = "((a/b))";
    bool res = checkRedundancy(s);
    cout << res;
    return 0;
}
