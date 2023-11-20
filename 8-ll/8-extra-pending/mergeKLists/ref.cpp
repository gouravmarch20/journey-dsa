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
//  /*
// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         vector<int> v ;

//         for(auto parent: lists){
//             while(parent != NULL){
//                 v.push_back(parent->val);
//                 parent = parent->next;
//             }
//         }
//         sort(v.begin(),v.end());
//         ListNode* head = new ListNode(0);
//         ListNode* tail = head;
//         for(auto& child: v){
//             tail->next = new ListNode(child);
//             tail = tail->next;
//         }
        
//         return head->next;
//     }
// };
// */

// class compare{
//      public:
//      bool operator()(ListNode* a,ListNode* b){
//             return a->val > b->val;
//      }
//  };
// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         int k=lists.size();

//         priority_queue<ListNode*,vector<ListNode*> , compare > minheap;

//         for(int i=0;i<k;i++){
//             if(lists[i]!=NULL)
//             minheap.push(lists[i]);
//         }

//         if(minheap.size() == 0)
//             return NULL;

//         ListNode* head=minheap.top();
//         ListNode* tail=head;
//         minheap.pop();
//         if(tail->next)
//             minheap.push(tail->next);

//         while(!minheap.empty()){
//             ListNode* temp=minheap.top();
//             minheap.pop();
//             tail->next=temp;
//             tail=temp;
//             if(tail->next!=NULL)
//                 minheap.push(tail->next);

             
//         }
//         return head;
//     }
// };