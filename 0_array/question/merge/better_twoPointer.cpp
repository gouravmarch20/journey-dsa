#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = m - 1;
        int right = 0;

        // Swap logic
        while (left >= 0 && right < n) {
            if (nums1[left] > nums2[right]) {
                swap(nums1[left], nums2[right]);
                left--;
                right++;
            } else {
                break;
            }
        }

        // Sort the valid ranges
        sort(nums1.begin(), nums1.begin() + m);
        sort(nums2.begin(), nums2.begin() + n);

        // Copy nums2 into the remaining portion of nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {-9};  // nums1 has enough space to accommodate nums2
    int m = 1;                      // Number of valid elements in nums1
    vector<int> nums2 = {-11, -10,3}; // Input nums2 array
    int n = 2;                      // Number of elements in nums2

    solution.merge(nums1, m, nums2, n);

    // Final output of merged nums1
    for (int ele : nums1) cout << ele << " ";
    cout << endl;
    for (int ele : nums2) cout << ele << " ";

    return 0;
}
