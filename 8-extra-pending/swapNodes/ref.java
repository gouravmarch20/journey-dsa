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
//     public ListNode swapNodes(ListNode head, int k) {
//         int length=0;
//         ListNode temp=head;
//         while(temp!=null){
//             length++;
//             temp=temp.next;
//         }
//         ListNode left=head,right=head;
//         for(int i=1;i<k;i++){
//             left=left.next;
//         }
//         for(int i=1;i<=length-k;i++){
//             right=right.next;
//         }
//         int temp1=left.val;
//         left.val=right.val;
//         right.val=temp1;
//         return head;

//     }
// }