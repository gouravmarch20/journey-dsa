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
//         ListNode *dummy=new ListNode(0);
//         if(head==NULL || head->next==NULL)
//         return head;
        
//         ListNode* cur=head;
//         ListNode* prev=dummy;
//         while(cur!=NULL && cur->next!=NULL)
//         {
//             prev->next=cur->next;
//             cur->next=prev->next->next;
//             prev->next->next=cur;
//             prev=cur;
//             cur=cur->next;
           
//         }
//         return dummy->next;
        
//     }
// };