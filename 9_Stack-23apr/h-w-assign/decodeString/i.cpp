#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <algorithm>

using namespace std;

string decodeString(string s)
{

    stack<string> st;
    for (auto ch : s) //^ learning auto use
    {

        if (ch == ']')
        {

            string stringToRepeat = "";
            // M Number sai try type case
            // M 12[a]2[b] --> not handing more than single digit like 999[a]
            // NOTE isDigit --> take char tell weather digit or not -->here we have string so s[0]
            while (!st.empty() && st.top() != "[")
            {
                string top = st.top();
                // stringToRepeat.push_back(top);//! string is not single char , can add like this

                stringToRepeat += top;
                st.pop();
            }
            st.pop(); //^ extra pop to remove
            // ? number
            string numericTimes = ""; //^ to store digit
            while (!st.empty() && isdigit(st.top()[0]))
            {
                numericTimes += st.top();
                st.pop();
            }
            // ? reverse number
            reverse(numericTimes.begin(), numericTimes.end());
            // ? type case string to number

            int n = stoi(numericTimes); // NOTE typecase
            string currDecode = "";
            while (n--)
            {
                currDecode += stringToRepeat; // NOTE: thinking miss
            }
            st.push(currDecode);
        } // ^ ignore opening bracket
        else
        {
            string temp(1, ch); //^ typecast --> how
            st.push(temp);      //? as string we push in stack
        }
    }
    string ans;
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{

    string s = "3[a]2[bc]";

    string res = decodeString(s);
    for (auto ch : res)
    {
        cout << ch;
    }
    return 0;
}
