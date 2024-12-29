#include <iostream>
#include <vector>   
using namespace std;
class Solution {
    public:
        vector<int> selectionSort(vector<int>& nums) {
            int n = nums.size();
    
            for(int i = 0 ; i < n ; i++){
                int miniIndex = i ;
              for(int j = i ; j < n  ; j++){
                if(nums[miniIndex] > nums[j]){
                    miniIndex = j;
                }
              }
              swap(nums[miniIndex] , nums[i]);
            }
            return nums;
        }
    };
    