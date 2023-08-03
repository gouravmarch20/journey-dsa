#include <iostream>
#include <vector>
using namespace std;

void printSubString(string s, string output, int i)
{
    if (i >= s.length())
    {
        
        cout << output << endl;
        return;
    }
    // include
    output.push_back(s[i]);
    printSubString(s, output, i + 1);
    output.pop_back();

    // exclude
    printSubString(s, output, i + 1);
}

int main()
{
    string s = "abc";
    string output = "";
    int i = 0;
    printSubString(s, output, i);

    // ans ? cout << "sorted arr" << endl : cout << "not " << endl;

    return 0;
}