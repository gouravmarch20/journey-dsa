#include <iostream>
#include <vector>

using namespace std;

void checkInclusion(string &s, int i)
{
    if ( i >= s.length() )
    { 
        cout << s <<" ";
        return;
    }

    for (int j = i; j < s.length(); j++)
    {

        swap(s[i], s[j]);
        // cout << s <<" ";

        checkInclusion(s, i + 1);
        swap(s[i], s[j]);
    }
};

int main()
{
    string s = "abc";
    // string s = "abc";
    int n = s.length();
    string output = "";
    checkInclusion(s, 0);
    return 0;
}
