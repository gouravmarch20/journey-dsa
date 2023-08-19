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
            string newString = "";
            // M Number sai try type case
            // M 12[a]2[b] --> not handing more than single digit like 999[a]
            // NOTE isDigit --> take char tell weather digit or not -->here we have string so s[0]
            while (!st.empty() && !isdigit(st.top()[0]))
            {
                string top = st.top();
                // stringToRepeat.push_back(top);//! string is not single char , can add like this
                // stringToRepeat.push_back(st.top());//! can not add character
                stringToRepeat += top; // IMPROVED concat is a way
                st.pop();
            }
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
            cout << numericTimes <<endl;
            int n = stoi(numericTimes); // NOTE typecase
            string currDecode = "";
            while (n--)
            {
                currDecode += stringToRepeat; // NOTE: thinking miss
            }
            st.push(currDecode);
        } // ^ ignore opening bracket
        else if (ch != '[')
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
    // string s = "3[a]2[bc]";
    string s = "3[z]2[2[y]pq4[2[jk]e1[f]]]ef";
    string res = decodeString(s);
    for (auto ch : res)
    {
        cout << ch;
    }
    return 0;
}
