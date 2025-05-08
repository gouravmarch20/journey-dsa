class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(auto ch : s){
          if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
          }else  if( 
            !st.empty()  &&
            st.top() == '(' && ch == ')' ||
            st.top() == '{' && ch == '}' ||
            st.top() == '[' && ch == ']'
            ){
              st.pop();
             }
          else{ 
            return false;
            }
        };
        if(st.empty()){
          return true;
        }
        return false;

    }
};