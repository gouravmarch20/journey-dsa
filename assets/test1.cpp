#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    bool checkSum(vector<int> &curr, int k)
    {
        int sum = 0;
        for (int i = 0; i < curr.size(); i++)
        {
            sum += curr[i];
        }
        return sum == k;
    }
    bool recCheckS(vector<int> &nums, int k, int i, vector<int> &curr)
    {
        if (i == nums.size())
        {
            cout << i << "show array";
            for (int i = 0; i < curr.size(); i++)
            {
                cout << " " << curr[i];
            }

            cout << endl;
            
            return checkSum(curr, k);
        }
        curr.push_back(nums[i]);

        bool res = recCheckS(nums, k, i + 1, curr);
        curr.pop_back();

        bool res1 = recCheckS(nums, k, i + 1, curr);

        return res || res1;
    }
    bool checkSubsequenceSum(vector<int> &nums, int k)
    {
        // your code goes here
        vector<int> curr;
        return recCheckS(nums, k, 0, curr);
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {4, 3, 9, 2}; // Example input
    int k = 10;                      // Example target sum

    if (solution.checkSubsequenceSum(nums, k))
    {
        cout << "Found a subsequence with sum " << k << endl;
    }
    else
    {
        cout << "No subsequence found with sum " << k << endl;
    }

    return 0;
}
