// class Solution {
// public:
//     int numPairsDivisibleBy60(vector<int>& time) {
//         unordered_map<int,int>mp;
//         int total=0;
//         for(auto x:time)
//         {
//            int val=x%60;
//            if(val==0)
//            total+=mp[val];
//            else if(mp.find(60-val)!=mp.end())
//            {
//                total+=mp[60-val];
//            }
//            mp[val]++;
//         }
//         return total;
       
        
//     }
// };