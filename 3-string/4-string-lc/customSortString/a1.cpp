
// class Solution {
// public:
//     static string str;//^ m2
//     //^ m3: static
//     //*L: internally sort whole string base on 2 --> value
//     static bool cSort(char c1 , char c2){
//         return str.find(c1) < str.find(c2);
//     }
//     string customSortString(string order, string s) {
//         str = order ;
//         sort(s.begin() , s.end() , cSort);
//         return s;
//     }
// };
// string Solution::str;//^ m1