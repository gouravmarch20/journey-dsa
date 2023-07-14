#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // int n = 5;
    // cout << sizeof(n) << endl;
    char ch = 's';
    char *c = &ch;
    string str = "gotan";
    string *s = &str;
    int num = 444;
    int *n1 = &num;

    cout << "size of char pointer " << sizeof(c) << endl;
    cout << "size of string  " << sizeof(s) << endl;
    cout << "size int pointer  " << sizeof(s) << endl;

    return 0;
}