#include <iostream>
#include <vector>
#include <climits>
#include <stack>

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
int countRev(string s)
{
    //
    if (s.size() & 1)
    {
        return -1;
    }

    stack<char> st;
    for (char ch : s)
    {
        if (ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }

    int c = 0;
    // ^ remove same case only 2 case pending -> (( , ))
    //& (( --> 1 change
    //& )) -> 2 change to make balance expression
    while (!st.empty())
    {
        char a = st.top();
        st.pop();
        char b = st.top();
        st.pop();
        //
        if (a == b)
        {
            c += 1; // M forget same mai only one change need
        }
        else
        {
            c += 2; // M both opposite case
        }
    }
    print(st);
    cout << c << endl;
    return c;
};

int main()
{

    string s = "}}}}}}{}{}}}{{}}}}{}}{{{}{}{}{}}{{{{}}}{}}";
    countRev(s);

    return 0;
}
