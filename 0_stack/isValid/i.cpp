// #include <iostream>
// #include <vector>
// #include <climits>
// #include <stack>
// #include <queue>
// #include <algorithm>
// #include <deque>

// using namespace std;


// bool isValid(string s)
// {
//     stack<char> st;
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         if (ch == '(' || ch == '{' || ch == '[')
//         {
//             st.push(ch);
//         }
//         else
//         {
//             //? when ch are --> ) } ] 
//             //! forgot to
//             if (!st.empty())
//             {

//                 char topChar = st.top();
//                 //
//                 // if (ch == '(' && topChar == ')')//! sign miss when 

//                 if (ch == ')' && topChar == '(')
//                 {
//                     st.pop();
//                 }
//                 else if (ch == '}' && topChar == '{')
//                 {
//                     st.pop();
//                 }
//                 else if (ch == ']' && topChar == '[')
//                 {
//                     st.pop();
//                 }
//                 else
//                 {
//                     return false;
//                 }
//             }
//             else
//             {
//                 return false; //! imp
//             }
//         }
//     }
//     if (st.empty())
//     {
//         return true;
//     }
//     else
//     {

//         return false;
//     }
// };

// int main()
// {
//     string s = "{()}";
//     bool res = isValid(s);
//     cout << res << endl;

//     return 0;
// }
