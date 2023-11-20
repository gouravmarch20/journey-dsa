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
    public ListNode deleteDuplicates(ListNode head) {
        ListNode ans=new ListNode();
        ListNode temp=ans;
        while(head!=null){
            if(head.next!=null && head.val==head.next.val){
                int a=head.val;
                while(head!=null && head.val==a){
                    head=head.next;
                }
            }
            else{
                ans.next=head;
                head=head.next;
                ans=ans.next;
            }
        }
        ans.next=null;
        return temp.next;
    }
}