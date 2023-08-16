// 328. Odd Even Linked List
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode oddEvenList(ListNode head) {
        // boolean flag=true;
        // ListNode odd=new ListNode();
        // ListNode even=new ListNode();
        // ListNode temp=head,temp1=odd,temp2=even;
        // while(temp!=null){
        //     if(flag){
        //         odd.next=temp;
        //         odd=odd.next;
        //         temp=temp.next;
        //         flag=false;
        //     }
        //     else{
        //         even.next=temp;
        //         even=even.next;
        //         temp=temp.next;
        //         flag=true;
        //     }
        // }
        // even.next=null;
        // odd.next=temp2.next;
        // return temp1.next;
        if(head==null || head.next==null) return head;
        ListNode odd=head,even=head.next;
        ListNode temp=even;
        while(even!=null && even.next!=null){
            odd.next=odd.next.next;
            even.next=even.next.next;
            even=even.next;
            odd=odd.next;
        }
        odd.next=temp;
        return head;
    }
}