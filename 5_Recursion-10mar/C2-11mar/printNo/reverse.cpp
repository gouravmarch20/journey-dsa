#include <iostream>
#include <vector>
using namespace std;

void printNo(int &no)
{
    // base case
    if (no == 0)
        return;

    // 1 case solve krdo
    int d = no % 10;
    no = no / 10;
    cout << d << " ";

    // baaki recursion sambhal lega
    printNo(no);
}

int main()
{
    int no = 5248;
    printNo(no);

    return 0;
}