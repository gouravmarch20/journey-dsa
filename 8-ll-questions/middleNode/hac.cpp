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
 int getlength(ListNode *temp){
        int len=0;
        while(temp!=NULL){

            len++;
            temp=temp->next;
        }
        return len;

    }
    ListNode* middleNode(ListNode* head) {
         if (head == nullptr) {
            return nullptr;
        }

        ListNode *temp=head;
        int len=getlength(temp);
       int count=len/2;
        // if(len%2==0){
        //    count=len/2;
        // }
        // else{
        //     count=len/2;
        // }
        int x=0;
        ListNode *res=head;
        cout<<"value of the count is "<<count<<endl;
        if(count%2==0){
        while(x<count){
           res=res->next;
           x++;
        }
        }
        else{

            while(x<count){
                res=res->next;
                x++;
            }
        }
        
        return res;
    }
};