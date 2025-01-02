#include <iostream>
#include <vector>   
using namespace std;
class Solution {
public:
    bool isAllCowPlaced(vector <int> nums , int noOfCowToPlace , int withD ){
        int noOfCowPaced = 1;
        int lastCowPlace = nums[0];
        for(int i = 1 ; i < nums.size(); i++){
            //!m1 :: equal to sign 

            if( (nums[i] - lastCowPlace) >= withD ){
                //! m3 :: lastCowPlace
                lastCowPlace = nums[i];
                noOfCowPaced++;
            }
        }
        // cout << "cherry " << noOfCowPaced << " "<< withD << endl;
        if(noOfCowPaced >= noOfCowToPlace) return true;
        return false;
    }

  
    int aggressiveCows(vector<int> &nums, int k) {
        int n = nums.size();

        sort(nums.begin() , nums.end());
        int low = 1;
        int high =  nums[n-1]  - nums[0] ;
        int ans = -1;
        while(low <= high){
            int m = (low + high) / 2;
            if(isAllCowPlaced(nums , k , m)){
                ans = m;
                low = m + 1;
            }else{
                high = m - 1;
            }
        }
        return ans;
    }
};