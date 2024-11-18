#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool checkSum(vector<int>& curr, int k) {
        int sum = 0; 
        for (size_t i = 0; i < curr.size(); ++i) { // Traditional for loop
            sum += curr[i]; // Calculate the sum
        }
        return sum == k; // Check if the sum equals k
    }

    bool recCheckS(vector<int>& nums, int k, int i, vector<int>& curr) {
        if (i == nums.size()) {
            return checkSum(curr, k);
        }

        // Include the current number
        curr.push_back(nums[i]);
        bool res = recCheckS(nums, k, i + 1, curr);
        curr.pop_back(); // Backtrack

        // Exclude the current number
        bool res1 = recCheckS(nums, k, i + 1, curr);
        
        return res || res1; // Return true if either result is true
    }

    bool checkSubsequenceSum(vector<int>& nums, int k) {
        vector<int> curr;
        return recCheckS(nums, k, 0, curr);
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};  
    int k = 6;
    bool result = solution.checkSubsequenceSum(nums, k);
    
    // Print the result
    cout << "The result is: " << (result ? "true" : "false") << endl;

    return 0;
}
