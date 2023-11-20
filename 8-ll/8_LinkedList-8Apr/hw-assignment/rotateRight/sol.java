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
//     public ListNode reverse(ListNode head){
//         ListNode prev=null;
//         while(head!=null){
//             ListNode upcoming=head.next;
//             head.next=prev;
//             prev=head;
//             head=upcoming;
//         }
//         return prev;
//     }
//     public ListNode rotateRight(ListNode head, int k) {
//         if(head==null || head.next==null) return head;
//         if(k==0) return head;
//         int length=0;
//         ListNode temp=head;
//         while(temp!=null){
//             length++;
//             temp=temp.next;
//         }
//         k=k%length;
//         if(k==0) return head;
//         int t=length-k;
//         temp=head;
//         for(int i=1;i<t;i++){
//             temp=temp.next;
//         }
//         //ListNode ans=reverse(temp.next);
//         ListNode ans=temp.next;
//         temp.next=null;
//         temp=ans;
//         while(temp.next!=null){
//             temp=temp.next;
//         }
//         temp.next=head;
//         return ans;
//     }
// }