
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
 
    int longestConsecutive(vector<int>& nums) {
        int res = 1;
        int n = nums.size();
        sort(nums.begin() , nums.end());
         int cnt = 1;
        for(int i = 0 ; i < n ;i++){
            
            while(i < n - 1 && nums[i] == nums[i+1]){
                i++;
            }
          
            int currVal = nums[i];
                
            if( (i < n-1) && (currVal + 1 == nums[i+1]) ){
                cnt += 1;
            }else{
                cnt = 1;
            }
            res = max(res , cnt );
        }
      
        return res;
    }
};