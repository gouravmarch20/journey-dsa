#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int negI = 1 ;
        int posI = 0;

        vector<int> res(n , 0);
        for(int i = 0 ; i < n ; i++){
            if(nums[i] >= 0){
                res[posI] = nums[i];
                posI = posI + 2 ;
            }else{
                res[negI] = nums[i];
                negI = negI + 2 ;
            }
        }
        return res;
    }
};