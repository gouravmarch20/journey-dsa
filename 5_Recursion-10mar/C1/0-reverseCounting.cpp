#include <iostream>
using namespace std;

void printCounting(int n)
{
    // base case
    if (n == 0)
        return;
    // processing
    cout << n << " "; //^ head recursion
    // recursive relation
    printCounting(n - 1);
    // cout << n << " "; //^ tail recursion
}

int main()
{

    int n = 7;

    printCounting(n);
    cout << endl;

    return 0;
}