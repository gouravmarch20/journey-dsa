#include <iostream>
using namespace std;

int powerOf2(int n)
{

    // base case
    if (n == 0)
        return 1;

    int chotiProblemAns =  powerOf2(n - 1);
    int badiProblemAns = 2 * chotiProblemAns;
    return badiProblemAns;
}

int main()
{

    int n = 5;

    int ans = powerOf2(n);

    cout << "Answer is: " << ans << endl;

    return 0;
}