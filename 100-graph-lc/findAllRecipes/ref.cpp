// class Solution {
// public:
//     vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {

//         unordered_map<string,bool> available;
//         vector<string> res;
//         for(auto str:supplies)
//             available[str]=true;

//         bool keepCooking=true;

//         int n=recipes.size();
//         vector<bool> created(n,0);
//         while(keepCooking)
//         {
//             keepCooking=false;
//             for(int i=0;i<n;i++)
//             {
//                 if(created[i])
//                     continue;

//                 int count=0;
//                 for(auto &s:ingredients[i])
//                 {
//                     if(available.find(s)!=available.end())
//                         count++;
//                 }
//                 if(count == ingredients[i].size())
//                 {
//                     keepCooking=true;
//                     created[i]=1;
//                     available[recipes[i]]=true;
//                     res.push_back(recipes[i]);
//                 }
//             }
//         }

//         return res;
//     }
// };