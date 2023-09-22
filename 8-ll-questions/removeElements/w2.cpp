/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       ListNode* dummyNode = new ListNode(-1);
       dummyNode->next = head;
       ListNode * curr = dummyNode;
      //^ why both test 
       while(curr != NULL && curr->next != NULL){
          if(curr->next->val == val ){//NOTE: 1 step ahead test , last walla is target --> it point to null
            ListNode * temp = curr->next;
            curr->next = temp->next;//NOTE: curr->next pointing +2 address , curr is in  same position
            delete temp;//NOTEtemp->next break , remove form memory
          }else{
            curr = curr->next;
          }
       }
       return dummyNode->next;
    }
};