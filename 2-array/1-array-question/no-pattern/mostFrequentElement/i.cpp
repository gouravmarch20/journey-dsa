#include <algorithm>

#include <iostream>

#include <vector>
using namespace std;
class Solution
{
public:
    /* Function to get the highest
    occurring element in array nums */
    int mostFrequentElement(vector<int> &nums)
    {

        // Variable to store the size of array
        int n = nums.size();

        // Variable to store maximum frequency
        int maxFreq = 0;

        /* Variable to store element
        with maximum frequency */
        int maxEle;

        // Visited array
        vector<bool> visited(n, false);

        // First loop
        for (int i = 0; i < n; i++)
        {
            // Skip second loop if already visited
            if (visited[i]){
                cout << "who" << i << endl ;
                continue;

            }
 
            /* Variable to store frequency
            of current element */
            int freq = 0;

            // Second loop
            for (int j = i; j < n; j++)
            {
                if (nums[i] == nums[j])
                {
                    cout << "hello" << nums[i] << " " << i << " " << j << endl;

                    freq++;
                    visited[j] = true;
                }
            }

            /* Update variables if new element having
            highest frequency is found */
            if (freq > maxFreq)
            {
                maxFreq = freq;
                maxEle = nums[i];
            }
            else if (freq == maxFreq)
            {
                maxEle = min(maxEle, nums[i]);
            }
        }

        // Return the result
        return maxEle;
    }
};

int main()
{
    vector<int> nums = {7, 9, 7, 8, 2, 7};

    /* Creating an instance of
    Solution class */
    Solution sol;

    /* Function call to get the
    highest occurring element in array nums */
    int ans = sol.mostFrequentElement(nums);

    cout << "The highest occurring element in the array is: " << ans;

    return 0;
}
