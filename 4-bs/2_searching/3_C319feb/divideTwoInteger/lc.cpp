//  TODO: 2^31 --> above break in -2
#include <iostream>
#include <vector>
#include <bits/stdc++.h> //^  pow function

using namespace std;
int bs(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend); //^ imp
    int m = s + (e - s) / 2;
    int approxQuotient;

    while (s <= e)
    {

        if (abs(m * divisor) == abs(dividend))
        {
            approxQuotient = m;
            break;
        }
        else if (abs(m * divisor) > abs(dividend))
        {
            e = m - 1;
        }
        else
        {

            approxQuotient = m;
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
    cout << "-->" << approxQuotient << endl;
    if (approxQuotient >= pow(2, 31))
    {
        if ((dividend >= 0) && (divisor >= 0))
        {
            return pow(2, 31) - 1;
        }
        if ((dividend < 0 && divisor < 0))
        {
            return pow(-2, 31);
        }
    }

    if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
    {

        return approxQuotient;
    }
    else
    {
        return -1 * approxQuotient;
    }

    return approxQuotient;
}
int main()
{

    int dividend = 10;
    int divisor = 1;

    cout << "present at index: " << bs(dividend, divisor) << endl;

    return 0;
}