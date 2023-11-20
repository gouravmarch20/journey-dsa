// class Solution {
// public:
//     int myAtoi(string s) {
//         string s1;
//         int ind = 0, cnt = 1, num = 0;

       
//         while (ind < s.length() && s[ind] == ' ')
//             ind++;

       
//         if (ind < s.length() && (s[ind] == '+' || s[ind] == '-')) {
//             if (s[ind] == '-')
//                 cnt = -1;
//             ind++;
//         }

       
//         while (ind < s.length() && isdigit(s[ind])) {
           
//             int digit = s[ind] - '0';

//             if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10)) {
//                 return (cnt == 1) ? INT_MAX : INT_MIN;
//             }

//             num = num * 10 + digit;
//             ind++;
//         }

//         return cnt * num;
//     }
// };
