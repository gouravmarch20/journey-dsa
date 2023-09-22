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
// ListNode *reverse(ListNode *head)
// {
//     ListNode *prev=NULL,*nex=NULL,*cur=head;
//     while(cur!=NULL)
//     {
//         nex=cur->next;
//         cur->next=prev;
//         prev=cur;
//         cur=nex;
//     }
//     return prev;
// }
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode *fi=l1;
//         ListNode *se=l2;
//         fi=reverse(fi);
//         se=reverse(se);
//         ListNode *dummy=new ListNode(-1);
//         ListNode *temp=dummy;
//         int carry=0;
//         while(fi!=NULL || se!=NULL)
//         {
//             int value=0;
//             if(fi!=NULL)
//             {
//                 value+=fi->val;
//                 fi=fi->next;
//             }
//             if(se!=NULL)
//             {
//                 value+=se->val;
//                 se=se->next;
//             }
//             value+=carry;
//             ListNode *newnode=new ListNode(value%10);
//             carry=value/10;
//             temp->next=newnode;
//             temp=temp->next;
//         }
//         if(carry)
//         {
//             ListNode *newnode=new ListNode(carry);
//             temp->next=newnode;
//             temp=temp->next;
//         }
//         ListNode *cur=dummy->next;
//         cur=reverse(cur);
//         return cur;
//     }
// };