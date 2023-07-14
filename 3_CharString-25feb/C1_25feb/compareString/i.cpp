#include <iostream>
#include <string.h>

using namespace std;
bool compareString(string a, string b)
{
    if (a.length() != b.length())
        return false;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string str = "git on";
    string str1 = "git on";
    cout << "is equal: " << compareString(str , str1)<<endl;
    return 0;
}