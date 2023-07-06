
#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
int findSrUsingBS(int n)
{
    int s = 0;
    int e = n;
    // int m = s + (e - s) / 2;
    int approxR = -1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;

        int sq = m * m;
        if (sq == n)
        {
            return m;
        }
        else if (sq < n)
        {
            approxR = m;
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    return approxR;
}
int main()
{

    // int n = 25;
    int n = 55;
    double approxSq = findSrUsingBS(n);

    cout << "approx square root at : " << approxSq << endl;
    int precision = 4;
    double step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (double j = approxSq; j * j <= n; j = j + step)
        {
            approxSq = j;
        }
        step = step / 10;
    }
    cout << "approx square root at : " << approxSq << endl;


    return 0;
}