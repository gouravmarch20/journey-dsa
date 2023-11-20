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
//     public int findgcd(int a,int b){
//         //int a=x,b=y;
//         while(a>0 && b>0){
//             if(a>b)a%=b;
//             else b%=a;
//         }
//         //System.out.println("a = "+ a +" b = "+ b);
//         if(a==0) return b;
//         else return a;
//     }
//     public ListNode insertGreatestCommonDivisors(ListNode head) {
//         if(head==null || head.next==null) return head;
//         ListNode temp=head;
//         while(temp.next!=null){
//             ListNode temp1=temp.next;
//             int ans=findgcd(temp.val,temp1.val);
//             //System.out.println(ans);
//             ListNode res=new ListNode(ans);
//             res.next=temp1;
//             temp.next=res;
//             temp=temp1;
//         }
//         return head;
//     }
// }