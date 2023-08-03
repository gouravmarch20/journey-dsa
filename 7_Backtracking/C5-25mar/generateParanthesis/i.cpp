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
void generateParenthesis(int n, int openBracket, int closeBracket, string output, vector<string> &ans)
{
    if (openBracket == 0 && closeBracket == 0)
    {
        ans.push_back(output);
        return;
    }
    // include
    if (openBracket > 0)
    {
        output.push_back('('); //^ single char add on push back
        generateParenthesis(n, openBracket - 1, closeBracket, output, ans);
        output.pop_back();//? why it's must -> include , exclude from same 
    }
    if (openBracket < closeBracket )
    {
        output.push_back(')');
        generateParenthesis(n, openBracket, closeBracket - 1, output, ans);
        // output.pop_back();
    }
}

int main()
{
    int n = 2;
    string output = "";
    vector<string> ans;
    generateParenthesis(n, n, n, output, ans);
    printString(ans);
    return 0;
}
