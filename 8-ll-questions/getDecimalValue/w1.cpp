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
//  public:
//   int getLength(ListNode* head) {
//     int c = 0;
//     while (head != NULL) {
//       head = head->next;
//       c++;
//     }
//     return c;
//   }
//   int getDecimalValue(ListNode* head) {
//     int res = getLength(head) - 1;

//     int no = 0;
//     ListNode* temp = head;
//     while (temp != NULL) {
//       if (temp->val) {
//         no += pow(2, res);
//       }
//       --res;
//       temp = temp->next;  //^ forgot
//     }
//     return no;
//   }
// };