#include <iostream>
#include <vector>
using namespace std;
//? char mai not stop until null or \O found
int main()
{
    char ch[10] = "gourav";
    char *c = ch;
    cout << ch << endl;//^ print entire string 
    cout << &ch << endl;

    cout << c[0] << endl;
    cout << &c << endl;

    cout << c << endl;
    cout << c+3 << endl;
    cout << *c << endl;//^ c+0 => c

    return 0;
}