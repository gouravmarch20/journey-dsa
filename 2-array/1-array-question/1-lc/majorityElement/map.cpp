// class Solution {
//  public:
//   vector<int> majorityElement(vector<int>& nums) {
//     vector<int> ans;
//     unordered_map<int, int> mp;
//     for (auto val : nums) {
//       mp[val]++;
//     }
//     int moreThan = nums.size() / 3;
//^m1   for(auto it = mp.begin() ; it < mp.end() ; it++){// size less than
//     for (auto it = mp.begin(); it != mp.end(); it++) {
//^m2 if(mp[it].second > moreThan ){// here it is memory address not , i
//^m3 //if(it.second > moreThan ){// need to access value
//       cout << it->first << " " << it->second << " -";
//       if (it->second > moreThan) {
//         ans.push_back(it->first);//L: how to push
//       }
//     }
//     return ans;
//   }
// };