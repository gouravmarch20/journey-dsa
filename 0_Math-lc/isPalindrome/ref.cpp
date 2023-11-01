class Solution {
    public:
        vector<int> palindrome(int x){
            vector<int>ans;
            while(x!=0){
                int digit=x%10;
                ans.push_back(digit);
                x=x/10;
            }
            return ans;
        }
        bool isPalindrome(int x) {
            if(x<0){
                return false;
            }
            vector<int> ans=palindrome(x);
            int s=0;
            int e=ans.size()-1;
            while(s<e){
                if(ans[s]!=ans[e]){
                    return false;
                }
                s++;
                e--;
            }
            return true;
    
            
           
        }
    };