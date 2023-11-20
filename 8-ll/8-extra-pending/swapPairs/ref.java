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
//     public ListNode swapPairs(ListNode head) {
//         if(head==null || head.next==null) return head;
//         ListNode left=head,right=head.next;
//         while(left!=null && right!=null){
//             int temp1=left.val;
//             left.val=right.val;
//             right.val=temp1;
//             if(right.next!=null) left=right.next;
//             else break;
//             if(left.next!=null) right=left.next;
//             else break;
//         }
//         return head;
//     }
// }