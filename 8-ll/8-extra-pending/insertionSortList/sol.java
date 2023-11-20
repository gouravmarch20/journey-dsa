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
    public ListNode insertionSortList(ListNode head) {
        if(head==null || head.next==null) return head;
        ListNode temp1=head;
        while(temp1.next!=null){
            ListNode temp2=temp1.next;
            while(temp2!=null){
                if(temp2.val<temp1.val){
                    int temp=temp1.val;
                    temp1.val=temp2.val;
                    temp2.val=temp;
                }
                temp2=temp2.next;
            }
            temp1=temp1.next;
        }
        return head;
    }
}