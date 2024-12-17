// class Solution{
//   public:
//     vector<int> arranged(int a[],int n)
//     {
//         vector <int> ans(n);
////^ example mai not mention but -> array random +ve , -ve not 1 +ve 1 -ve
//         int pp = 0 ;
//         int nn = 1;
        
//         for(int i = 0 ; i < n ; i++){
//             if(a[i] >= 0 ){
//                ans[pp] = a[i];
//                pp += 2;
//             }
//         }
        
//         for(int i = 0 ; i < n ; i++){
//             if(a[i] < 0 ){
//                ans[nn] = a[i];
//                nn += 2;
//             }
//         }
     
        
//         return ans;
    
//     }
// };