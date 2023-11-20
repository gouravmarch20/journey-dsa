// class Solution {
// public:
// 	vector<int> previousSmallerElement(vector<int>& arr) {
// 		// Your code goes here
//         stack <int> st;
//         vector <int> ans(arr.size()  , -1 );
//         for(int i = 0 ; i < arr.size() ; i++){
            //M opposite sign --> prevSmall if curr small then only it remove 
//             while(!st.empty() && arr[i]  <=  st.top()){
//                 st.pop();
//             }
//             if(st.empty()){
//                 ans[i] = -1;
//             }else{
//                 ans[i] = st.top();
//             }
//             st.push(arr[i]);
//         }
//         return ans;
// 	}
// };