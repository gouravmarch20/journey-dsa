// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         //^m1: type of map unordered_set<int > set
//         //^m2: star wrong palce       <* int > set
//         unordered_set<ListNode *> set;
//         ListNode * curr = head;
//         while(curr != NULL){
//           // M3: set.find no idea return end if not found
//           if(set.find(curr) != set.end()){
//             return curr;
//           }else{
//             set.insert(curr); 
//              curr = curr->next; 
//           }
//         }
//         return NULL;
//     }
// };