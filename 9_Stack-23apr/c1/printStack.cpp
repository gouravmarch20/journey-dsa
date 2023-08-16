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
    if (s.length() & 1)
    {
        return -1;
    }

    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {

        if ((!st.empty()) && (s[i] == '}') && (st.top() == '{'))
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    print(st);

    return 44;
};

int main()
{

    string s = "}{{{";
    //M it's print not like array 
    countRev(s);//NOTE: output print / access form top 

    return 0;
}
