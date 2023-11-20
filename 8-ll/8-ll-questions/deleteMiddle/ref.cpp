// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if (head->next==nullptr) {
//             return nullptr;
//         }

//        ListNode *slow=head,*fast=head,*prv=slow;

//         while (fast!=nullptr && fast->next!=nullptr) {
//             prv = slow;
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         prv->next = slow->next;
//         delete slow;

//         return head;
//     }
// };