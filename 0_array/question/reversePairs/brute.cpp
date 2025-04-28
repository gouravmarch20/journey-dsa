
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    int reversePairs(vector<int>& nums) {
          int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++){ 
            for(int j = i + 1; j < nums.size() ; j++){  
                long long n1 = nums[i];
                long long n2 = 2LL * nums[j]; // Explicitly cast to long long before multiplication

                if(n1  > n2){
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};