
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // !m 
        if(nums.size() == 0){
            return 0;
        }
        int lastSmaller = INT_MIN; 

        int longest = 1;//!m2
        int cnt = 0; //!m1

        sort(nums.begin() , nums.end());
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] - 1 == lastSmaller){
                cnt += 1;
                lastSmaller = nums[i];
                longest = max(cnt , longest);
            }//!m4 else if case --> not else ==> prevent duplicate
            else if(nums[i] != lastSmaller){
                cnt = 1;
                lastSmaller = nums[i]; //!m3 need to up

            }
 
        }

                            return longest;

     }
};