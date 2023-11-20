// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map <int , int> m;
//         vector <int> ans(nums1.size());

//         stack <int> st;
//         for(int i =  nums2.size() -1 ; i >= 0 ; i--){
//           //Learning : equal to not compulasary all items unique
//           while( !st.empty() && st.top() < nums2[i]  ){
//             st.pop();
//           }
//           if(st.empty()){
//             m[nums2[i]] = -1;
//           }else{
//              m[nums2[i]] = st.top();
//           }
//            st.push(nums2[i]); //^m2 not push in stack
          
//        }
        


   
//        for(int i = 0 ; i < nums1.size() ; i++){
//        int a = m[nums1[i]];//M1 forgot ans vector size need to tell , before direct assign
//        ans[i] = a;
//       // ans.push_back(a);
//        }
//        return ans;

       


//     }
// };