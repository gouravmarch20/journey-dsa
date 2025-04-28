#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int i = 0, j = 0;

        // Traverse both arrays
        while (i < nums1.size() && j < nums2.size()) {
            // If nums1[i] is smaller, add it to the result
            if (nums1[i] < nums2[j]) {
                res.push_back(nums1[i]);
                // Skip duplicates in nums1
                while (i < nums1.size() - 1 && nums1[i] == nums1[i + 1]) i++;
                i++;
            }
            // If nums2[j] is smaller, add it to the result
            else if (nums1[i] > nums2[j]) {
                res.push_back(nums2[j]);
                // Skip duplicates in nums2
                while (j < nums2.size() - 1 && nums2[j] == nums2[j + 1]) j++;
                j++;
            }
            // If both are equal, add one and skip duplicates in both arrays
            else {
                res.push_back(nums1[i]);
                while (i < nums1.size() - 1 && nums1[i] == nums1[i + 1]) i++;
                while (j < nums2.size() - 1 && nums2[j] == nums2[j + 1]) j++;
                i++;
                j++;
            }
        }

        // Add remaining elements from nums1
        while (i < nums1.size()) {
            res.push_back(nums1[i]);
            while (i < nums1.size() - 1 && nums1[i] == nums1[i + 1]) i++;
            i++;
        }

        // Add remaining elements from nums2
        while (j < nums2.size()) {
            res.push_back(nums2[j]);
            while (j < nums2.size() - 1 && nums2[j] == nums2[j + 1]) j++;
            j++;
        }

        return res;
    }
};
