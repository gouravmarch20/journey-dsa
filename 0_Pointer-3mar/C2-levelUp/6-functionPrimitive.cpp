#include <iostream>
#include <vector>
using namespace std;
//^ pointer arr storing starting
void checkPtr(int *p)
{
    *p = *p +100;
}
int main()
{
    int a = 5;
    int *p = &a;
    checkPtr(p);
    cout << a <<endl;
    return 0;
}