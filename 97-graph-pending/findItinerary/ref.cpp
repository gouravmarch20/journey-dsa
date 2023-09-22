// class Solution {
// public:
//     unordered_map<string,vector<string>> adj;
//     vector<string> result;
//     int numTicket;

//     bool dfs(string fromTicket, vector<string>& path){

//         path.push_back(fromTicket);

//         if(path.size() == numTicket+1){
//             result = path;
//             return true;
//         }

//         vector<string>& child = adj[fromTicket];
//         for(int i=0; i<child.size(); i++){

//             string toTicket = child[i];

//             child.erase(child.begin()+i);

//             if(dfs(toTicket, path)){
//                 return true;
//             }

//             child.insert(child.begin()+i, toTicket);
//         }

//         path.pop_back();
//         return false;
//     }

//     vector<string> findItinerary(vector<vector<string>>& tickets) {
//         numTicket = tickets.size();

//         for(auto& child:tickets){
//             adj[child[0]].push_back(child[1]);
//         }

//         for(auto& child:adj){
//             sort(begin(child.second), end(child.second));
//         }

//         vector<string> path;
//         dfs("JFK", path);
//         return result;
//     }
// };