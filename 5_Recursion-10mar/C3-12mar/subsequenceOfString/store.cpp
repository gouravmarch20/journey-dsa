#include <iostream>
#include <vector>
using namespace std;

void printSubString(string s, string output, int i, vector<string> &arr)
{
    if (i >= s.length())
    {
        arr.push_back(output);
        return;
    }
    // include
    output.push_back(s[i]);
    printSubString(s, output, i + 1 , arr);
    output.pop_back();

    // exclude
    printSubString(s, output, i + 1, arr);
}

int main()
{
    string s = "abc";
    string output = "";
    vector<string> arr;
    int i = 0;
    printSubString(s, output, i, arr);
    cout << "printing all " << endl;
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}