
 #include <iostream>
 
#include <vector>
 #include <map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int > mp;
        for(int i = 0 ; i < nums.size() ; i++){
            // ! map syntax forgot 
            mp[nums[i]]++;
        }
        int res = nums[0];
        int maxi = INT_MIN;
        for(auto it : mp){
          //! m1:  int key = it->first; int val = it->second; 
             int key = it.first;  
    int val = it.second;  
            if(maxi < val){
                maxi = val;
                res = key;
            }
        }
        return res;
    }
};