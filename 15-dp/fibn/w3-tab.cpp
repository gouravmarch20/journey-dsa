#include <vector>
using namespace std;

class Solution
{
public:
    int bottomUpFib(int n, vector<int> &dp)
    {
        // Step 2: Handle the base cases
        dp[0] = 0;
        if (n == 0)
            return 0;
        dp[1] = 1;

        // Step 3: Iterate from 2 to n to calculate Fibonacci values
        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2]; // Fibonacci recurrence relation
        }

        return dp[n];
    }

    int fib(int n)
    {
        // Step 1: Create a dp array with size (n+1), initialized to -1
        vector<int> dp(n + 1, -1);
        return bottomUpFib(n, dp);
    }
};
