#include <iostream>
#include <vector>
using namespace std;

void findAllIndex(string &str, int i, int &n, char &key, vector<int> &ans)
{
    // base case
    if (i >= n)
    {
        // key not found
        return;
    }
    // 1 case solve krdo
    if (str[i] == key)
    {
        ans.push_back(i);
    }

    // baaki recursion sambhal lega
    findAllIndex(str, i + 1, n, key, ans);
}

int main()
{
    string str = "lovebabbar";
    int n = str.length();

    char key = 'b';

    int i = 0;
    vector<int> ans;
    findAllIndex(str, i, n, key, ans);
    cout << "printing element found at index " << endl;
    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}