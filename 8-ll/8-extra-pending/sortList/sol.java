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
//     public ListNode merge(ListNode left,ListNode right){
//         ListNode ans=new ListNode();
//         ListNode temp=ans;
//         while(left!=null && right!=null){
//             if(left.val<right.val){
//                 temp.next=left;
//                 left=left.next;
//                 temp=temp.next;
//             }
//             else{
//                 temp.next=right;
//                 right=right.next;
//                 temp=temp.next;
//             }
//         }
//         if(left!=null){
//             temp.next=left;
//         }
//         if(right!=null){
//             temp.next=right;
//         }
//         return ans.next;
//     }
//     public ListNode sortList(ListNode head) {
//         if(head==null || head.next==null) return head;
//         // ListNode temp1=head;
//         // while(temp1.next!=null){
//         //     ListNode temp2=temp1.next;
//         //     while(temp2!=null){
//         //         if(temp2.val<temp1.val){
//         //             int temp=temp1.val;
//         //             temp1.val=temp2.val;
//         //             temp2.val=temp;
//         //         }
//         //         temp2=temp2.next;
//         //     }
//         //     temp1=temp1.next;
//         // }
//         // return head;
//         ListNode slow=head,fast=head,prev=null;
//         while(fast!=null && fast.next!=null){
//             prev=slow;
//             slow=slow.next;
//             fast=fast.next.next;
//         }
//         prev.next=null;
//         ListNode l1=sortList(head);
//         ListNode l2=sortList(slow);
//         return merge(l1,l2);

//     }
// }