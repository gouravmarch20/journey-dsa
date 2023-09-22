// class Solution {
// public:
//     bool finding(int index, int k, vector<int>& v){
//         for(int i:v){
//             if(index+i == k)
//                 return true;
//         }
//         return false;
//     }
    
//     int total(vector<int>& v){
//         int sum = 0;
//         for(int i:v)
//             sum+=i;
//         return sum;
//     }
    
//     int f(int n, int k, int index, vector<int> v){
//         if(v.size() == n)
//             return total(v);
        
//         int maxi = 0 ;
//         if(finding(index,k, v) == false)
//             v.push_back(index);

//         return f(n, k, index+1, v);
//     }
    
//     int minimumSum(int n, int k) {
//         return f(n, k, 1, {});
//     }
// };