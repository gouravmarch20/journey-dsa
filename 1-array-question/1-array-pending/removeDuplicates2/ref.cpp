class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=2;
        if(nums.size()<=2) return nums.size();

        for(int fast=2;fast<nums.size();fast++){
            if(nums[fast]!=nums[slow-2]) nums[slow]=nums[fast],slow++;
        }



        return slow;

        
    }
};



//  int n=nums.size();
//         if(n<=2) return n;
//         int slow = 2;
//         for(int fast=2; fast < n; fast++){
//             if(nums[fast]!=nums[slow-2]){
//                 nums[slow]=nums[fast];
//                 slow++;
//             }
//         }
//         return slow;