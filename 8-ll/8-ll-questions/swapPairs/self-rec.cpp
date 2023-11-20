// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//       if(head == NULL || head->next == NULL){
//         return head;
//       }
//       ListNode * forward = head->next->next;
//       ListNode * prev = head;
//       head = head->next;
//       head->next = prev;
//       prev->next = swapPairs(forward );
//       return head;
      
//     }
// };