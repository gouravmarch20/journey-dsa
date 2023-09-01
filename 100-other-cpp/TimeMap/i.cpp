// /*class TimeMap {
// public:
//     unordered_map<string, map<int, string>> mymap; // corrected declaration of mymap

//     TimeMap() {
//         // removed unused variable start
//     }
    
//     void set(string key, string value, int timestamp) {
//         mymap[key][timestamp] = value;
//     }
    
//     string get(string key, int timestamp) {
//         auto it = mymap.find(key); // check if key exists in mymap
//         if(it != mymap.end()) {
//             auto mp = it->second; // retrieve the inner map
//             auto val = mp.upper_bound(timestamp); // use upper_bound instead of lower_bound
//             if(val != mp.begin()) { // check if an element was found
//                 --val; // decrement val to get the closest element that is less than timestamp
//                 return val->second;
//             }
//         }
//         return "";
//     }
// };*/

// /*class TimeMap {
// public:
//     unordered_map<string,vector<pair<int,string>>> mymap;

//     TimeMap() {
//         int start=0;
//     }
    
//     void set(string key, string value, int timestamp) {
//         mymap[key].push_back({timestamp,value});
//     }
    
//     string get(string key, int timestamp) {
        
//         auto it = mymap.find(key);
//         if(it != mymap.end()){
//             auto mp = it->second;

//             int start = 0;
//             int end = mp.size()-1;
//             int mid = start + (end - start)/2;

//             while(start<=end){
//                 if(mp[mid].first == timestamp){
//                     return mp[mid].second;
//                 }else if(mp[mid].first < timestamp){
//                     start = mid+1;
//                 }else{
//                     end = mid-1;
//                 }
//                 mid = start + (end - start)/2;
//             }

//             if(start == mp.size())
//                 return "";
//             return mp[start].second;
          
//         }
//         return "";
//     }
// };
// */
// class TimeMap {
// public:
//     unordered_map<string, multimap<int, string>> mymap;

//     TimeMap() {
//     }

//     void set(string key, string value, int timestamp) {
//         mymap[key].insert({ timestamp, value });
//     }

//     string get(string key, int timestamp) {

//         auto it = mymap.find(key);
//         if (it != mymap.end()) {
//             auto& mp = it->second;
//             auto it2 = mp.upper_bound(timestamp);
//             if (it2 != mp.begin()) {
//                 --it2;
//                 return it2->second;
//             }
//         }
//         return "";
//     }
// };





// /**
//  * Your TimeMap object will be instantiated and called as such:
//  * TimeMap* obj = new TimeMap();
//  * obj->set(key,value,timestamp);
//  * string param_2 = obj->get(key,timestamp);
//  */