

#include <climits>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
 #include <map>
using namespace std;

//!m1 : all right sai greater than --> not just next right sai
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
    int n = nums.size() - 1;
    vector<int> res;
 
    int maxi = INT_MIN;
    //!m1:: till zero tak loop ==>  use = sign 
    for(int i = n ; i >= 0 ; i--){
        if(nums[i] > maxi){
            res.push_back(nums[i]);
            maxi = nums[i];
        }
    }
     
    reverse(res.begin() , res.end());
         return res;
    }
  
};