/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        if(head==null || head.next==null ) return null;
        ListNode slow=head,fast=head;
        boolean flag=false;
        while(fast!=null){
            slow=slow.next;
            if(fast.next==null) break;
            fast=fast.next.next;
            if(slow==fast) {
                flag=true;
                break;
                }
        }
        if(flag){
            ListNode temp=head;
            while(temp!=slow){
                temp=temp.next;
                slow=slow.next;
            }
            return slow;
        }
        return null;
    }
}