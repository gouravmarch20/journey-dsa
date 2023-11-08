#include <iostream>
#include <vector>
#include <climits>
#include <stack>

using namespace std;

void toHex(){

};

int main()
{

    string s = "abcde";
    string ans;
    int i = 0;
    while (i < s.length())
    {
        ans[i] = s[i]; // M it's work because string to string assignment  but avoid -->  modify characters in the ans string using an index (ans[i]) that doesn't exist yet
        // IMPROVED: --> push_back , string concat 
        i++;
    }

    i = 0;
    while (i < s.length())
    {
        cout << ans[i];
        i++;
    }

    return 0;
}
