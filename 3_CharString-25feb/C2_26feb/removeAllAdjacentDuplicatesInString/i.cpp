#include <iostream>
using namespace std;
//  REVISION FORGOT PUSH_BACK METHORD IN CPP
string removeDuplicates(string s)
{
    string ans = "";
    int i = 0;
    while (i < s.length())
    {
        if (ans.length() > 0 && s[i] == ans[ans.length() - 1])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }

    return ans;
}
int main()
{
    string ans = "abbaca";
    cout << removeDuplicates(ans);
    return 0;
}