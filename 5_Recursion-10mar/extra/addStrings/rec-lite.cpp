// class Solution {
// public:
//     void helper(string & num1 , int p1 , string & num2 , int p2,int carry , string & ans ){
//         //bc
//         if(p1 < 0 && p2 < 0){
//             if(carry != 0 ){
//                 ans.push_back(carry);
//             }
//             return ;//M forgot to stop
           
//         }
//         //
//         int n1 = (p1 >= 0 ? num1[p1] : '0') - '0' ;//^ why equal to  zero ==> at zero index --> an digit present everytime
//         int n2 = (p2 >= 0 ? num2[p2] : '0') - '0' ;
//         int csum = n1 + n2 + carry;
//         int digit = csum % 10;
//         carry = csum /10;


//         ans.push_back(digit + '0');// ^ as string adding 
//         //RR
//         helper(num1 , p1 - 1 , num2 , p2 -1 , carry, ans);
//     }
//     string addStrings(string num1, string num2) {
//         string ans = "";
//         int carry = 0;
//         //^ - forgot
//   helper(num1 , num1.length() -1 , num2 , num2.length() - 1 ,carry , ans );

//          reverse(ans.begin() , ans.end());// forget referse functon
//          return ans;
//     }
// };