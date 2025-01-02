
 #include <iostream>
 
#include <vector>
 #include <map>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
               int s = 0 ; int n = nums.size() ; int e = n - 1  ; int ans = n;

        while(s <= e){
            int m = (s+e)/2;
            if(nums[m] < target){
                 
                    s = m + 1;     
            }else if(nums[m] == target){
                return m ;
            }else{
                // ! will here 
                  ans = m ;
                e = m - 1;
            }
        }
        return ans;

    }
};