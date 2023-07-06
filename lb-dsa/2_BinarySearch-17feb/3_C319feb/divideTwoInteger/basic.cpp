#include <iostream>
#include <vector>
using namespace std;
int bs(int dividend, int divisor)
{
    int s = 0;
    int e = dividend;
    int m = s + (e - s) / 2;
    int approxQuotient = -1;
    // int c = 0;
    while (s <= e)
    {
        if (abs(divisor * m) == dividend)
        {
            return m;
        }
        else if (abs(divisor * m) > abs(dividend))
        {
            e = m - 1;
        }
        else
        {

            approxQuotient = m;
            s = m + 1;
        }
        m = s + (e - s) / 2;
        // if (c > 20)
        // {
        //     return 1;
        // }
        // c++;
    }
    return approxQuotient;
}
int main()
{

    int dividend = 10;
    int divisor = 3;
    cout << "present at index: " << bs(dividend, divisor) << endl;

    return 0;
}