#include <iostream>
#include <algorithm>

using namespace std;

void clearIthBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
}

void updateIthBit(int &n, int i, int target)
{
    clearIthBit(n, i);
    int mask = target << i;
    n = n | mask;
    cout << "after updating " << n << endl;
}

int main()
{
    int n = 10;
    updateIthBit(n, 3, 0);

    return 0;
}