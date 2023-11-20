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
      //M forgot 

      //M1 -> not think head !=NULL is important
      //M2  if(head != NULL && head->val == val){//M head != NULL in if block , not in while block
         if(!head){
           return head;
         }
          
        ListNode* prev = NULL , * current = head;

        while (current ) {
            if (current->val == val) {
                ListNode * temp = current; 
                current = current->next;
                  if(!prev){
                    head = current;//M curr  sai head change
                }else{
                    prev->next = current;// ^ pointing change
                }
                delete temp;
            } else {
                // Move to the next node.
                prev = current;
                current = current->next;
            }
        }

        return head;//^m forgot

    }
};