
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findKRotation(vector<int> &nums)  {
     int mini = INT_MAX;
     int cnt = 0 , n =nums.size() ;
     for(int i = 0 ; i < n ; i++){
        mini = min(nums[i] , mini);
     } 
      for(int i = 0 ; i < n ; i++){
        if(nums[i] > mini){
            cnt++;
        }else{
            break;
        }
     }
     return cnt;
    }
};