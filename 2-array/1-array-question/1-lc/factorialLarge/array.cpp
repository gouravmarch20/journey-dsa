//   vector<int> factorial(int N){
//         // code here
//         vector <int> ans;
//         ans.push_back(1);
//         int carry = 0;
//    //! m1 N till factor need --> so include N 
//         for(int i = 2 ; i <= N ; i++ ){
//             for(int j = 0 ; j < ans.size() ; j++){

//                 int x = ans[j] * i + carry;
////^m3 visualize 0 index is last no ,carry wall push at back of array (n) index
//                 ans[j] = x % 10;
//                 carry = x/10;
//             }
////! m2: carry can be more than 2 digit ==> 13 * 9 => 117 -> 11 as carry
//             while(carry){
//                 ans.push_back(carry%10);
//                 carry /= 10;
//             }

//         }
        
//         reverse(ans.begin() , ans.end());
//         return ans;
        
//     }