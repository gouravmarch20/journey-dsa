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


      //M1 -> not think head !=NULL is important
      //M2  if(head != NULL && head->val == val){//M head != NULL in if block , not in while block
         
            while(head != NULL && head->val == val){
                ListNode * temp = head;
                head = head->next;
                delete temp;//m ^ forgot 
              }
            
        ListNode* prev = NULL;
        ListNode* current = head;

        while (current != NULL) {
            if (current->val == val) {
                ListNode * temp = current;
                current = current->next;//M3 need to do first
                prev->next = current;//NOTE prev is at same place , it next point diff
                delete temp;
            } else {
                // move to the next node.
                prev = current;
                current = current->next;
            }
        }

        return head;//^m forgot 

    }
};