// class Solution {
// public:

//     int minSetSize(vector<int>& arr) {
//         vector<int> v;
//         //^ arr.sort(arr.begin() , arr.end());//M sort methord
//         sort(arr.begin() , arr.end());
//         int c = 1;
//         int ans = 0;
//         for(int i = 1; i < arr.size() ; i++){
//        //*L: new way of including same
//             if(arr[i-1] == arr[i]){
//                 c++;
//             }else{
//                 v.push_back(c);
//                 c= 1;
//             }
//         }
//         v.push_back(c);//L: needed for last case 
//         sort(v.begin() , v.end());

//         int n = arr.size() / 2 ;//? tell total element need to remove
//         for(int i = v.size()-1 ; n > 0 && i >= 0 ;i--){
//             ans++;
//             n -= v[i];//* imp
//         }
//         return ans;

//     }
// };