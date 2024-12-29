#include <iostream>
#include <vector>
#include <map>

using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map <int , int> prefixS ;
        int n = nums.size();
        int sum = 0 ;
        int cnt = 0 ;

        for(int i = 0 ; i < n ; i++){
              sum += nums[i];
              //? to handle if direct sum ==> req not caught
            if(sum == k ){
                cnt++;
            }
           
            int req = sum - k;
            if(prefixS.find(req) != prefixS.end()){
                cnt += prefixS[req];
            }
            prefixS[sum] = prefixS[sum] + 1;
        
        }
        return cnt;
    }
};