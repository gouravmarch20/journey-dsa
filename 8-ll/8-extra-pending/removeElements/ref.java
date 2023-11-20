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
//     public ListNode removeElements(ListNode head, int val) {
//         if(head==null) return head;
//         ListNode right=head;
//         ListNode left=new ListNode();
//         head=left;
//         while(right!=null){
//             if(right.val!=val){
//                 left.next=right;
//                 left=right;
//             }
//             right=right.next;
//         }
//         left.next=null;
//         return head.next;
//     }
// }