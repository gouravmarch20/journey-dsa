// class Solution {
// public:


//     int minimumRounds(vector<int>& tasks) {

//         int cnt=0;

//         unordered_map<int,int>st;

//         for(int i:tasks) st[i]++;

//         for(auto it:st){
//             if(it.second==1) return -1;

//             cnt+= (it.second+2)/3;

//         }

//         return cnt;

      
       

        
//     }
// };