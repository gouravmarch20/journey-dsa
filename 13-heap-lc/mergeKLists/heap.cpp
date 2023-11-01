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
//  class compare{
//      public:
// L: two data give --> consider true if a is bigger

//         bool operator()(ListNode * a , ListNode *b){
//             return a->val > b->val;
//         }
//  };
// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         // TODO:DEBUG COMPARE OPERATOR NEED
//         priority_queue <ListNode* , vector <ListNode*> , compare> minHeap;
//         int k = lists.size();
//         if(k == 0) return NULL;
//         // LL head of every LL insert , by default all LL acess
//         for(int i = 0 ; i < k  ; i++){
//                        if (lists[i] != nullptr) { // Check if the list is not
//                        empty
//                 minHeap.push(lists[i]);
//             }

//         }
//         ListNode * head = NULL;
//         ListNode * tail = NULL;
//         //
//          while (!minHeap.empty()) {
//             ListNode* temp = minHeap.top();
//             minHeap.pop();

//             if (head == nullptr) {
//                 head = temp;
//                 tail = temp;
//             } else {
//                 tail->next = temp;
//                 tail = temp;
//             }

//             if (temp->next != nullptr) {
//                 minHeap.push(temp->next);
//             }
//         }

//         return head;
//     }
// };