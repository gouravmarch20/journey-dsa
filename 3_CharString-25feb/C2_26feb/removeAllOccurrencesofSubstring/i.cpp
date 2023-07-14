#include <iostream>
#include <string>

using namespace std;
string removeOccurrences(string s, string part)
{
    // string ans = "";
    int pos = s.find(part);
    int i = 0;
    while (pos != string::npos)
    {

        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}
int main()
{
    string ans = "daabcbaabcbc";
    string part = "abc";
    cout << removeOccurrences(ans, part);
    return 0;
}