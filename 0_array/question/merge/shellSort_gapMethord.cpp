#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to merge two sorted arrays nums1 and nums2
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = n + m;
        int gap = (len / 2) + (len % 2);

        while (gap > 0) {
            int left = 0;
            int right = left + gap;
            while (right < len) {
                // When left in nums1[] and right in nums2[]
                if (left < m && right >= m) {
                    swapIfGreater(nums1, nums2, left, right - m);
                }
                // When both pointers in nums2[]
                else if (left >= m) {
                    swapIfGreater(nums2, nums2, left - m, right - m);
                }
                // When both pointers in nums1[]
                else {
                    swapIfGreater(nums1, nums1, left, right);
                }
                //Increment the pointers by 1 each
                left++, right++;
            }
            //If gap is equal break out of the loop
            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }

        // Copy elements of nums2 into nums1
        for (int i = m; i < m + n; i++) {
            nums1[i] = nums2[i - m];
        }
    }

private:
    // Utility function to swap elements if needed
    void swapIfGreater(vector<int>& arr1, vector<int>& arr2, int idx1, int idx2) {
        if (arr1[idx1] > arr2[idx2]) {
            swap(arr1[idx1], arr2[idx2]);
        }
    }
};

int main() {
    vector<int> nums1 = {-5, -2, 4, 5, 0, 0, 0};
    vector<int> nums2 = {-3, 1, 8};
    int m = 4, n = 3;

    // Create an instance of the Solution class
    Solution sol;

    sol.merge(nums1, m, nums2, n);

    // Output the merged arrays
    cout << "The merged array is:\n";
    cout << "nums1[] = ";
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
