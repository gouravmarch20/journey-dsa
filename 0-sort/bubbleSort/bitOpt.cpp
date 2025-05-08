#include <iostream>
#include <vector>   
using namespace std;
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            int isSwap = 0;
            for(int j = 0 ; j < n-1 ; j++){
                isSwap = 1;
                if(nums[j] > nums[j+1]){
                    swap(nums[j] , nums[j+1]);
                }
            }
            if(isSwap == 0) return nums;
        }
        return nums;
    }
};
