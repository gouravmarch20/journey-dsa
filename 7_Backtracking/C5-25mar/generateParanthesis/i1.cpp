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
void generateParenthesis(vector<string> &ans, int used_open, int used_close, int rem_open, int rem_close, string output)
{
    if (rem_open == 0 && rem_close == 0)
    {
        ans.push_back(output);
        return;
    }
    // include
    if (rem_open > 0)
    {
        output.push_back('('); //^ single char add on push back
        generateParenthesis(ans, used_open + 1, used_close, rem_open - 1, rem_close , output);
        output.pop_back(); //? why it's must -> include , exclude from same
    }
    if (rem_open < rem_close)
    {
        output.push_back(')');
        generateParenthesis(ans, used_open, used_close + 1, rem_open , rem_close -1, output);
        output.pop_back();
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
    generateParenthesis(ans, used_open, used_close, rem_open, rem_close, output);
    printString(ans);
    return 0;
}
