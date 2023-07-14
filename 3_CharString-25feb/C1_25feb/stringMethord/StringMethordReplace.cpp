#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    string str = "This is my First Message";
    string word = "Babbar";

    str.replace(11, 2, "Sedi");//^ from 11 index sai replace 2 char 
        cout << str << endl;

    str.replace(0, 5, "gourav --- hello ");//^ 
    cout << str << endl;
    return 0;
}