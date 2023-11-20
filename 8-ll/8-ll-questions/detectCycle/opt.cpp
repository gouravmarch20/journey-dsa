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
//       ListNode *fast = head , *slow = head , *temp = head;
//       //M if only one case 
//       if(head == NULL || head->next == NULL){
//         return NULL;
//       }
      
//       while(fast && fast->next){
//           fast = fast->next->next;
//           slow = slow->next;
//           if(fast == slow){
//               while(temp != slow){
//                 slow = slow->next;
//                 temp  = temp->next;
//               }
//               return slow;
//           }

//       }
//       return NULL;//M if no CLL found
//     }
// };