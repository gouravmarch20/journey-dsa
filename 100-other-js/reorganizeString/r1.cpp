// class Solution {
// public:
//     string reorganizeString(string s) {
//         string res="";
//         unordered_map<char,int>mp;
//         priority_queue<pair<int,char>>pq;
//         for(auto i:s){
//             mp[i]++;
//         }
//         for(auto i:mp){
//            pq.push({i.second,i.first});
//         }
//        while(pq.size()>1){
//            auto top=pq.top();
//            pq.pop();
//            auto next=pq.top();
//            pq.pop();
//            res+=top.second;
//            res+=next.second;
//            top={top.first-1,top.second};
//            next={next.first-1,next.second};
//            if(top.first>0){
//                pq.push(top);
//            }
//            if(next.first>0){
//                pq.push(next);
//            }
//        }
//        if(!pq.empty()){
//            char last=pq.top().second;
//            if(pq.top().first>1){
//                return "";
//            }
//            res+=last;
//        }
//         return res;
//     }
// };
