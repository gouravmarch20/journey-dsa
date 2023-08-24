#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>
#include <deque>

using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int deficit = 0; // how much gas less
    int balance = 0; // how much gas extra
    int start = 0;   // where we are starting
    for (int i = 0; i < gas.size(); i++)
    {
        balance += gas[i] - cost[i]; // old gas (balance ) + upcoming add petrol - traveling cost
        if (balance < 0)
        {
            // cout << "--> " << deficit << " " << balance << endl;
            // deficit += balance; // M add_assign operator forgot +
            deficit += abs(balance);
            start = i + 1;
            balance = 0;
        }
    }
    // if (deficit + balance >= 0) // M miss equal to sign
    if (deficit <= balance)
    {
        return start;
    }
    else
    {
        return -1;
    }
}
int main()
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    canCompleteCircuit(gas, cost);

    return 0;
}
