// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// class MinStack
// {
// public:
//     vector<pair<int, int>> st;
//     MinStack()
//     {
//     }

//     void push(int val)
//     {
//         if (st.empty())
//         {
//             pair<int, int> p = make_pair(val, val);
//             st.push_back(p);
//         }
//         else
//         {
//             pair<int, int> p;
//             p.first = val;
//             int l = st.size();
//             p.second = min(val, st[l-1].second);//^ without back function
//             // p.second = min(val, st.back().second);
//             st.push_back(p);
//         }
//     }

//     void pop()
//     {
//         st.pop_back();
//     }

//     int top()
//     {
//        return  st.back().first;
//     }

//     int getMin()
//     {   
//        return  st.back().second;

//     }
// };

// void toHex(){

// };

// int main()
// {

//     return 0;
// }
