// class Solution {
// public:
//     int findJudge(int n, vector<vector<int>>& trust) {
//         unordered_map <int , vector<int>> umap;
//         for(auto it : trust){
//               int first = it[0];
//             int second = it[1];
//             umap[first].push_back(second);
//         }
//         vector <int> trustNoOne;
//      for(int i= 1 ; i <= n ; i++){
//         auto it = umap[i];
//         //!  if(umap[i] == 0){//M: it key , vector form 
//         // cout<< it.first << " ";//M: vector it is
//         if(it.size() == 0){
//             trustNoOne.push_back(i);
//         }

//      }
//      int res = -1;
//      int trustNo ;
//      if(trustNoOne.size() > 0){
//      res = trustNoOne[0];
//      }else{
//          return -1;
//      }
    
//     for(auto it : umap){
//         cout << it.first <<" ";
//         for(auto i : it.second){
//             if(res == i){
//                 return -1;
//             }
//         }
//     }
//     return res;

//     }
// };