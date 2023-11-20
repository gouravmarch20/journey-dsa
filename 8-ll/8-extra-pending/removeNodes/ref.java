// /**
//  * Definition for singly-linked list.
//  * public class ListNode {
//  *     int val;
//  *     ListNode next;
//  *     ListNode() {}
//  *     ListNode(int val) { this.val = val; }
//  *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
//  * }
//  */
// class Solution {
//     //int maxVal=0;
//     public ListNode reverse(ListNode head){
//         if(head.next==null){
//             //maxVal=head.val;
//             return head;
//         }
//         ListNode ans=reverse(head.next);
//         if(head.val>=ans.val){
//             head.next=ans;
//             ans=head;
//             //maxVal=head.val;
//             //System.out.println(maxVal);
//         }
//         return ans;
//     }
//     public ListNode removeNodes(ListNode head) {
//         return reverse(head);
//     }
// }