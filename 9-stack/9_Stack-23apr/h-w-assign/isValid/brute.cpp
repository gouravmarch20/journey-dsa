#include <iostream>
#include <vector>
#include <climits>
#include <stack>

using namespace std;
void print(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
}
bool isValid(string s)
{
    // ? means t to s journey possible by abc 
    if (s.length() == 0)
    {
        return true;
    }
    
    size_t fnd = s.find("abc");
    // cout << fnd << endl;
    if (fnd != string::npos) //^ npos if not fnd , else index
    {
        string tLeft = s.substr(0, fnd); //^ substr exclude last index
        string tRight = s.substr(fnd + 3, s.length());
        return isValid(tLeft + tRight);
    }

    return false;//^ if not found ,abc in string means false
}

int main()
{
    string s = "ababcbcabc";
    isValid(s);

    return 0;
}
