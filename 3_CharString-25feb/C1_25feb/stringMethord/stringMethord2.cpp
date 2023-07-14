#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string str = "gourav kumar";
    cout << "length: " << str.length() << endl;
    cout << "tell string empty or not: " << str.empty() << endl;
    str.push_back('A');
    cout << "after push_back: " << str << endl;
    str.pop_back();
    cout << "after pop_back: " << str << endl;
    cout << " substr: " << str.substr(1, 3) << endl;//^ include start , end
    // cout << str << endl;

    return 0;
}