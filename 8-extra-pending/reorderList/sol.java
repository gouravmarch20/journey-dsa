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
//     public void reorderList(ListNode head) {
//         ListNode prev=null,slow=head,fast=head;
//         while(fast!=null && fast.next!=null){
//             slow=slow.next;
//             fast=fast.next.next;
//         }
//         prev=slow.next;
//         slow.next=null;
//         ListNode temp=null;
//         while(prev!=null){
//             ListNode upcoming=prev.next;
//             prev.next=temp;
//             temp=prev;
//             prev=upcoming;
//         }
//         slow=head;
//         ListNode ans=new ListNode();
//         ListNode res=ans;
//         boolean flag=true;
//         while(slow!=null && temp!=null){
//             if(flag){
//                 ans.next=slow;
//                 slow=slow.next;
//                 ans=ans.next;
//                 flag=false;
//             }
//             else{
//                 ans.next=temp;
//                 temp=temp.next;
//                 ans=ans.next;
//                 flag=true;
//             }
//         }
//         ans.next=slow;
//         head=res.next;
//     }
// }