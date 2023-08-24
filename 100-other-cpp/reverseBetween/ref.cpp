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
//     ListNode* reverseBetween(ListNode* head, int left, int right) {

//         ListNode *dummy=new ListNode(0);
//         dummy->next=head;
//         ListNode *prev=dummy,*cur=dummy,*nex=dummy;
//         int count=1;
//         while(cur->next!=NULL)
//         {
//             prev=cur;
//             cur=cur->next;
          
//             count++;
//             while(count>left && count<=right)
//             {ListNode *nex=cur->next;
//                 cur->next=nex->next;
//                 nex->next=prev->next;
//                 prev->next=nex;
//                 nex=cur->next;
//                 count++;
//             }
            
//         }
//         return dummy->next;
        
//     }
// };