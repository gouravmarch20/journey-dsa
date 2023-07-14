#include <iostream>
#include <vector>
using namespace std;

void printNo(int &no)
{
    // base case
    if (no == 0)
        return;

    // 1 case solve krdo
    int d = no % 10;//^ store in stack locally until function not end
    no = no / 10;

    // baaki recursion sambhal lega
    printNo(no);
    cout << d << " ";
}

int main()
{
    int no = 647;
    printNo(no);

    return 0;
}