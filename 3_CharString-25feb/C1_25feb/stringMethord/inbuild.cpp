#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <algorithm> //NOTE: header for the reverse function


using namespace std;

void toHex(){

};

int main()
{
    string s = "abcde";

    reverse(s.begin(), s.end()); 

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }

    return 0;
}
