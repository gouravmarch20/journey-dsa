#include <iostream>
#include <vector>
#include <climits>
#include <stack>

using namespace std;
void print(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
}
bool isValid(string s)
{
    stack<char> st;
    if (s[0] != 'a')
    {
        return false;
    }
    //
    for (auto ch : s)
    {
        if (ch == 'a')
            st.push(ch);
        else if (ch == 'b')
        {
            if (!st.empty() && st.top() == 'a')
            {
                st.push(ch);
            }
            else
            {
                return false;
            }
        }
        else if (ch == 'c')
        {
            if (!st.empty() && st.top() == 'b')
            {
                st.pop();
            }
            else
            {
                return false;
            }
            if (!st.empty() && st.top() == 'a')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    //
    return (st.empty());
}

int main()
{
    string s = "ababcbcabc";
    isValid(s);

    return 0;
}
