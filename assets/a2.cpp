class Solution{
    public:
    bool checkSum(vector<int> & curr , int k ){
        int sum = 0 ; 
        for(int i = 0 ; i < curr.size() ; i++){
            if(sum == k) return true;

        }
        return false;
    }
    bool recCheckS(vector<int> & nums , int k , int i , vector <int> & curr){
        if(i == nums.size()){
            return checkSum(curr , k);
        }
        curr.push_back(nums[i]);
        
       bool res =   recCheckS(nums , k , i +1 , curr );
               curr.pop_back();

       bool res1 = res ;
       if(res == false){
         res1 =  recCheckS(nums , k , i , curr);
       }
       return res || res1  ;
       
    }
    bool checkSubsequenceSum(vector<int>& nums, int k) {
         //your code goes here
        vector <int> curr ;
       return  recCheckS(nums , k , 0 , curr  );
    }
};
#include <vector>
 #include <iostream>
using namespace std;
  
int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};  
    int k = 6;
    bool result = solution.checkSubsequenceSum(nums , k);
    // cout << "the " << result  ;

    // Print the result
     
    return 0;
}