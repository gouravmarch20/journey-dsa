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
//     bool hasCycle(ListNode *head) {
//         ListNode *slow = head;
//         ListNode *fast = head; 
//        // while(head != NULL && head->next != NULL){//M head is not moving
//           while(fast != NULL && fast->next != NULL){
//             fast = fast->next->next;
//             slow = slow->next;
//             if(fast == NULL){
//               break;
//             }
//             //^ m2 : think for value compare --> question reading 
//             if(fast && fast == slow ){
//                 return true;
//             }
//         }
//         return false ;
//     }
// };