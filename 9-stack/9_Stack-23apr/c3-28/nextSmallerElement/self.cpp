// class Solution {
// public:
// 	vector<int> nextSmallerElement(vector<int>& nums) {
// 		// Your code goes here
// 		int n = nums.size();
// 		vector <int> ans(n , 0);
// 		stack <int> st;
// 		for(int i = n - 1; i >= 0 ; i-- ){

// 			//M >=  next smaller so skip if equal or greater
// 			while(!st.empty() && st.top() >= nums[i]){
// 				st.pop();
// 			}
// 			if(st.empty()){
// 				ans[i] = -1;
// 			}else{
// 				ans[i] = st.top();
// 			}

// 			st.push(nums[i]);
// 		}
// 		return ans;
// 	}
// };