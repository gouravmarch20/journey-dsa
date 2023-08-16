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
//     public ListNode partition(ListNode head, int x) {
//         ListNode temp=new ListNode();
//         ListNode right=new ListNode();
//         ListNode left=temp,rightHead=right;
//         while(head!=null){
//             if(head.val<x){
//                 left.next=head;
//                 head=head.next;
//                 left=left.next;
//             }
//             else{
//                 right.next=head;
//                 head=head.next;
//                 right=right.next;
//             }
//         }
//         right.next=null;
//         left.next=rightHead.next;
//         return temp.next;
//     }
// }