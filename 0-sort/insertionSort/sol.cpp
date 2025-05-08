#include <iostream>
#include <vector>   
using namespace std;
class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j > 0 ; j--){
                if(  nums[j-1] > nums[j] ){
                    swap(nums[j] , nums[j-1]);
                }
            }
        }
        return nums;
    }
};
