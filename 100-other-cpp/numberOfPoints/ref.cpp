// class Solution {
// public:
//     int numberOfPoints(vector<vector<int>>& nums) {
        
//         vector<pair<int,int>> points;
        
//         for(auto i:nums){
//             points.emplace_back(i[0],i[1]);
//         }
        
//         sort(points.begin(),points.end());
        
//         int st=0,pr=-1;
        
//         for(auto i:points){
            
//             int fir=i.first;
//             int sec=i.second;
            
//             int rgstart=max(fir,pr+1);
//             int rgend=max(sec,pr);
            
//             if(rgstart<=rgend) st+=(rgend-rgstart+1);
            
//             pr=max(pr,sec);

//         }
        
//         return st;
        
//     }
// };