
#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
          int n = nums.size(); 
        int maxLength = 0;

          for (int startIndex = 0; startIndex < n; startIndex++) { 
            // ending index
            int sum = 0;
            for (int endIndex = startIndex; endIndex < n; endIndex++) { 
                sum += nums[endIndex];
                if(sum == k){
                  maxLength =   max(maxLength ,(endIndex - startIndex + 1) );
                }
              }
            }
        return maxLength;
        
    }
};
