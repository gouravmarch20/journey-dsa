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
    public ListNode mergeNodes(ListNode head) {
        if(head.next==null || head==null) return null;
        ListNode left=new ListNode();
        ListNode right=head.next;
        head=left;
        int sum=0;
        while(right!=null){
            if(right.val==0){
                ListNode temp=new ListNode(sum);
                left.next=temp;
                left=left.next;
                sum=0;
                right=right.next;
            }else{
                sum+=right.val;
                right=right.next;
            }
        }
        left.next=null;
        return head.next;
    }
}