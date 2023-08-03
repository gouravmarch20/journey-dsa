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
    // exclude
    printSubString(s, output, i + 1);
    // include
    //? concat of output with s[i]
    // output.push_back(s[i]);
    output = output + s[i];
    printSubString(s, output, i+1);
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