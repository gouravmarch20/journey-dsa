// class Solution {
// public:
//     string originalDigits(string s) {
//       unordered_map<char,int>m1;

//       vector<int>v1(10);

//       for(char i:s) m1[i]++;

//       v1[0]=m1['z'];
//       v1[1]=m1['o']-v1[0]-m1['w']-m1['u'];

//       v1[2]=m1['w'];
//       v1[3]=m1['h']-m1['g'];

//       v1[4]=m1['u'];
//       v1[5]=m1['f']-m1['u'];

//       v1[6]=m1['x'];
//       v1[7]=m1['s']-m1['x'];

//       v1[8]=m1['g'];
//       v1[9]=m1['i']-v1[6]-v1[8]-v1[5];

//       string ans;

//       for(int i=0;i<10;i++){

//           while(v1[i]) ans.push_back(i+'0'),v1[i]--;

//       }

//       return ans;

//     }
// };

// //my note 


// // unique one to identify

// // zero -z
// // two -w
// // four -u
// // six -x
// // eight -g

// // identify using unique one`s 

// // one =>count[o]-count[z]-count[w]-count[u]
// // three =>count[h]-count[h]

// // five=>count[f]-count[u];
// // seven =>count[s]-count[x]

// // nine=>count[i]-count[x]-count[g]-count[five]