
#include <climits>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
 #include <map>
using namespace std;
class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int i , j = 0;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> res;
        // 
        while (i < n && j < m) {
            if( nums1[i] < nums2[j] ){
                i++;
            }else if(nums1[i] > nums2[j]  ){
                j++;
            }else{
                res.push_back(nums1[i]);
                i++;
                j++;
            }
            // 

        }
        return res;
        
    }
};