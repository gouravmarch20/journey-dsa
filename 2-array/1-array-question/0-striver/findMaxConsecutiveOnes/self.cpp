 
#include <climits>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
 #include <map>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                cnt++;
            }else{
                if(maxi < cnt){
                    maxi = cnt;
                }
                cnt = 0;

            }
        }
        // ! m1 :: failed here max needs -> what if last is not 0
        // [1,0,0,0,1,1,0,1,1,0,1,1,1,1,1,1,1]

        return max(maxi , cnt);
    }
};

