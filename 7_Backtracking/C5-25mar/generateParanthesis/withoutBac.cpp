#include <iostream>
#include <vector>

using namespace std;
void printString(vector<string> str)
{
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < str[0].length(); j++)
        {
            cout << str[i][j];
        }
        cout << endl;
    }
}
void generateParenthesis(vector<string> &ans, int n, int used_open, int used_close, int rem_open, int rem_close, string output)
{
    if (rem_open == 0 && rem_close == 0)
    {
        ans.push_back(output);
        return;
    }
    // include
    if (rem_open > 0)
    {

        generateParenthesis(ans, n ,used_open + 1, used_close, rem_open - 1, rem_close, output + '(');
    }
    if (rem_open < rem_close)
    {

        generateParenthesis(ans,n, used_open, used_close + 1, rem_open, rem_close - 1, output + ')');

    }
}

int main()
{
    int n = 2;
    string output = "";
    int used_open = 0;
    int used_close = 0;
    int rem_open = n;
    int rem_close = n;
    vector<string> ans;
    generateParenthesis(ans, n, used_open, used_close, rem_open, rem_close, output);
    printString(ans);
    return 0;
}
