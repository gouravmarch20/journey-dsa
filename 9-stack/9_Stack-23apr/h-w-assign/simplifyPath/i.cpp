#include <iostream>
#include <vector>
#include <climits>
#include <stack>

using namespace std;
// TODO: WITHOUT RECURSION
// void buildAns(stack<string> &st, string &ans)
// {
//     while (st.empty())
//     {
//         st.top();
//     }

// }
void buildAns(stack<string> &st, string &ans)
{
    if (st.empty())
    {
        return;
    }
    string minPath = st.top();
    st.pop();
    buildAns(st, ans);
    ans += minPath;
}

string simplifyPath(string path)
{
    stack<string> st; //! not char type , we are storing string
    int i = 0;

    while (i < path.size())
    {
        int start = i;
        int end = i + 1;
        while (end < path.size() && path[end] != '/')
        {
            end++;
        }
        string minPath = path.substr(start, end - start); // M end-start missed --> thinked 0 index case only

        i = end; // M --> means now it  start form end index ,
        if (minPath == "/" || minPath == "/.")
        {
            continue;
        }
        else if (minPath != "/..")
        {
            st.push(minPath);
        }
        else if (minPath == "/..")
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
    }
    string ans = st.empty() ? "/" : "";
    buildAns(st, ans);
return ans;
    // return (reverse(ans.begin() , ans.end()))//M reverse stack wrong way
}

int main()
{
    string path = "/home//foo/";
    simplifyPath(path);
    return 0;
}
