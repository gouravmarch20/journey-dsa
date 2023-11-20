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
//         if(head == NULL || head->next == NULL){
//           return head;
//         }
//         //head
//         ListNode * curr = head->next->next;
//         ListNode * prev = head;
//         head = head->next;
//         head->next = prev;
//         // ListNode * forward = NULL;
//         while(curr != NULL && curr->next != NULL){

//           prev->next = curr->next;
//           prev = curr;

//           ListNode * forward = curr->next->next;
//           curr->next->next = curr;//^ not understand my , missed
//           curr = forward;
//         }
//         //last
//         prev->next = curr;
//         return head;
//     }
// };/**
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
//         if(head == NULL || head->next == NULL){
//           return head;
//         }
//         //head
//         ListNode * curr = head->next->next;
//         ListNode * prev = head;
//         head = head->next;
//         head->next = prev;
//         // ListNode * forward = NULL;
//         while(curr != NULL && curr->next != NULL){

//           prev->next = curr->next;//NOTE fixing prev link with correct
//           prev = curr;

//           ListNode * forward = curr->next->next;
//           curr->next->next = curr;//NOTE swap logic
//           curr = forward;
//         }
//         //last
//         prev->next = curr;//NOTE pending ll link && remove circular loop ?//
//         NOTE :null add or pending node in odd case

// return head;
//     }
// };