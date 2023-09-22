// class Solution {
// public:
//     string say(const string& m1) {
//         int cnt = 1;
//         string ans = "";

//         for (int i = 1; i < m1.length(); i++) {
//             if (m1[i] == m1[i - 1]) {
//                 cnt++;
//             } else {
//                 ans.push_back(cnt + '0'); 
//                 ans.push_back(m1[i - 1]);
//                 cnt = 1;
//             }
//         }

//         ans.push_back(cnt + '0');
//         ans.push_back(m1.back()); 

//         return ans;
//     }

//     string countAndSay(int n) {
       
//         if (n == 1) return "1";

//         vector<string> m1(n + 1);
//         m1[0] = "1";
//         m1[1] = "11";

//         for (int i = 2; i < n; i++) {
//             m1[i] = say(m1[i - 1]);
//         }
//         return m1[n-1];
//     }
// };