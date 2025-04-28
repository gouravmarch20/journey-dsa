
#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
          int n = nums.size(); 
          int maxLength = 0;
          unordered_map<int , int > mpPrefixSum;
          int sum = 0 ;
          for (int i = 0; i < n; i++) { 
            sum += nums[i];
            if(sum == k){
              maxLength = max(maxLength , i + 1);
            }
            int rem = sum - k;
            if(mpPrefixSum.find(rem) != mpPrefixSum.end()){
                            // !m : len cal

              int len = i - mpPrefixSum[rem];
               maxLength = max(maxLength , len);
            }
            //! Only store the first occurrence ==> need largest occurence
            if (mpPrefixSum.find(sum) == mpPrefixSum.end()) {
                mpPrefixSum[sum] = i;
            }
            
          }
        return maxLength;
        
    }
};
