// class Trie {
// public:
//     Trie* next[2];

//     Trie() {
//         next[0] = nullptr;
//         next[1] = nullptr;
//     }
// };
// class TrieNode{
//     private:
//         Trie* root;
//     public:
//         TrieNode()
//         {
//             root=new Trie();
//         }
    
//     void insert(int num)
//     {
//         Trie* curr=root;
        
//         for(int i=31;i>=0;i--)
//         {
//             int bit=(num>>i)&1;//L: checking bit without changing number
//             if(curr->next[bit]==NULL)
//             {
//                 curr->next[bit]=new Trie();
//             }
//             curr=curr->next[bit];
//         }
//     }
//     // TODO: DOUGHT
//     int maxXor(int num)
//     {
//         Trie* curr=root;
//         int ans=0;
//         for(int i=31;i>=0;i--)
//         {
//             int bit=(num>>i)&1; //0 or 1
            
//             if(curr->next[!bit]) // bit opposite present xor mai include
//             {
//                 ans+=(1<<i);// will sure add in no , xor include diff bit
//                 curr=curr->next[!bit];
//             }
//             else
//             {
//                 curr=curr->next[bit];
//             }
//         }
    
//         return ans;
//     }   
// };
// class Solution {
// public:
//     int findMaximumXOR(vector<int>& nums) {
//         int maxAns=0;
//         int n=nums.size();
        
//         TrieNode* t=new TrieNode();
        
//         for(int i=0;i<n;i++)
//         {
//             t->insert(nums[i]);
//             maxAns=max(maxAns,t->maxXor(nums[i]));
//         }
//         return maxAns;
//     }
// };