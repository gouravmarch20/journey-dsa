//* O(n^2 * n /2 * n/2) ==> O(n^2)
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int expandAroundIndex(string s, int l, int r)
{
    int n = s.length();
    int c = 0;
    while (l >= 0 && r < n && s[l] == s[r])
    {
        c++;
        l--;
        r++;
    }
    return c;
}
//* O(n)
int countSubString(string s)
{
    int c = 0; // count
    int n = s.length();
    for (int center = 0; center < n; center++)
    {
        // odd
        int oddAns = expandAroundIndex(s, center, center );//* O(n/2)
        // cout << oddAns << " ";
        // even
        int evenAns = expandAroundIndex(s, center, center + 1);//* O(n/2)
        c += evenAns + oddAns;
    }
    return c;
}
int main()
{
    string s = "noon";
    int res = countSubString(s);
    cout << res<<endl;
    return 0;
}