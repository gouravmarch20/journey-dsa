// class Solution {
// public:
//     string convert(string s, int numRows) {

//         if(numRows==1) return s;

//      vector<string> ans(numRows);
//      int i=0;
//      bool che=false;

//      for(auto ch:s){

//          ans[i]+=ch;
//          if(i==0||i==numRows-1) che=!che;
//          if(che) i++;
//          else i--;
//      }
//      string re="";

//      for(auto i:ans){
//          re+=i;
//      }

//      return re;
        
//     }
// };