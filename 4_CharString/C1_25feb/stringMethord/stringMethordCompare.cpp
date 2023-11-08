#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string a = "Love";
    string b = "love";

    if (a.compare(b) == 0)
    {
        cout << " a and b are exactly same strings" << endl;
    }

    //if not equal the if s1 less then -ve value
    string s1 = "abcd";
    string s2 = "bcd";
    cout << "Comparison result: " << s1.compare(s2) << endl;

    return 0;
}