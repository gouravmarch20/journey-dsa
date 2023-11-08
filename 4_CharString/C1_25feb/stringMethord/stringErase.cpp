#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    string str = "ABCDEFGHIJKLMNOPQRST";
    str.erase(10, 10);
    cout << str;
    return 0;
}