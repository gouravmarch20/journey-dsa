
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution {
public:
 
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0; 
        unordered_set<int> st;
        int longest = 1; 

       for(int i = 0 ; i < n  ; i++){
        st.insert(nums[i]);
       }

       for(int i = 0 ; i < n  ; i++){
        // hack
        if(st.find(nums[i] - 1 ) == st.end()){
            int cnt = 1;
            // !m ==> need to moviing while loop
            int currFind  = nums[i] + 1; 
            while(st.find(currFind) != st.end()){
                cnt++;
                currFind += 1;
            }
            longest = max(cnt , longest);

        }
       }
       return longest;

    }
};