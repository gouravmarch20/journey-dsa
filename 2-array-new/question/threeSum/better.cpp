#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     
       
        //!m1 set syntax
        set<vector<int>> tripletSet;

        for(int i = 0 ; i< nums.size() ; i++){
            set<int> hashset;
             for(int j = i+1 ; j < nums.size() ; j++){
                int third = -(nums[i] + nums[j]);
                if(hashset.find(third) != hashset.end()  ){
                    vector<int> temp = {nums[i] , nums[j] , third};
                    sort(temp.begin() , temp.end());
                    tripletSet.insert(temp);

                }
                hashset.insert(nums[j]);
             }
        }
         
    
        // for (auto it : tripletSet) {
        //     res.push_back(it);
        // }
                vector<vector<int>> res(tripletSet.begin(), tripletSet.end());

        return res;
    }
};