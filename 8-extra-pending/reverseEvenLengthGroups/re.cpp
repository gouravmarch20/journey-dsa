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
//     ListNode* reverseEvenLengthGroups(ListNode* head) {
//        ListNode *cur=head,*prev=NULL;
//        int count=0;
//        while(cur)
//        {
//            count++;
//            cur=cur->next;
//        }
//        cur=head;
//        int value=1;
//        while(cur && value<=count){
//             int x=value;
//             while(cur && x){
//                 prev=cur;
//                 cur=cur->next;
//                 x--;
//             }
//             count-=value;
//             value++;
//             if(cur && value<=count){
//                 ListNode *nxt;
//                 x=value;
//                 while(cur->next && x-1>0){
//                     nxt=cur->next;
//                     cur->next=nxt->next;
//                     nxt->next=prev->next;
//                     prev->next=nxt;
//                     x--;
//                 }
//                 prev=cur;
//                 cur=cur->next;
//                 count-=value;
//                 value++;
//             }
//             else
//                 break;
//         }
//            if(count>0 && count%2==0)
//            {
//                ListNode *nex;
//                int x=count;
//                while(cur->next!=NULL && x-1>0)
//                {
//                    nex=cur->next;
//                    cur->next=nex->next;
//                    nex->next=prev->next;
//                    prev->next=nex;
//                    x--;
//                }
//            }
       
//        return head;
        
//     }
// };