#include <iostream>
#include <vector>

using namespace std; // Use the "std" namespace throughout the file

int robHelper(vector<int>& nums , int i) {
    if (i >= nums.size()) return 0;

    int robAmt1 = nums[i] + robHelper(nums , i+2);
    int robAmt2 = 0 + robHelper(nums , i+1);
    return max(robAmt1 , robAmt2);
}

int rob(vector<int>& nums) {
    return robHelper(nums , 0);
}

int main() {
    vector<int> nums = {2, 7, 9, 3, 1};
    int result = rob(nums);
    cout << "Maximum amount that can be robbed: " << result << endl; // No need for "std::" here
    return 0;
}
