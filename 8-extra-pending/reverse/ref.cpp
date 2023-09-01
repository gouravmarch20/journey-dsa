
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
//     ListNode* reverse(ListNode *head)
//     {
//         ListNode* prev=NULL,*nex=NULL;
//         ListNode *cur=head;
//         while(cur!=NULL)
//         {
//             nex=cur->next;
//             cur->next=prev;
//             prev=cur;
//             cur=nex;
//         }
//         return prev;
//     }
//     void reorderList(ListNode* head) {
//         ListNode* old=head;
//         ListNode *slow=head,*fast=head;
//         while(fast!=NULL && fast->next!=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         ListNode *even=slow->next;
//         slow->next=NULL;
//         even=reverse(even);
//         while(old!=NULL && even!=NULL)
//         {
//             ListNode *temp=even->next;
//             even->next=old->next;
//             old->next=even;
//             even=temp;
//             old=old->next->next;
//         }
       

        
//     }
// };