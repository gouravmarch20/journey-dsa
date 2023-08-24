#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>
#include <deque>

using namespace std;

char findTheDifference(string s, string t)
{
    int s1 = 0;
    int s2 = 0;
    int i = 0;
    for (; i < s.length(); i++)
    {
        s1 += s[i] - 'a';
        s2 += t[i] - 'a';
    }
    s2 += t[i] - 'a';
    // cout <<  'a' + (s2 - s1) ;//M

    char a = 'a' + (s2 - s1) ;

    return a;
}

int main()
{
    string s = "abcd";
    string t = "abcde";
    findTheDifference(s, t);

    return 0;
}
