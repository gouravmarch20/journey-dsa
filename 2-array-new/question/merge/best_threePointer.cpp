#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;        // Pointer for nums1's valid elements
        int p2 = n - 1;        // Pointer for nums2
        int p = m + n - 1;     // Pointer for merged array (nums1)

        // Merge in reverse order
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }

        // If any elements remain in nums2, copy them
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
        // Note: No need to copy remaining elements of nums1 because they are already in place.
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
    for (int ele : nums2) cout << ele << " ";
    cout << endl;

    return 0;
}
