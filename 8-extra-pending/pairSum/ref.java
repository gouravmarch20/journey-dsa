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
    public int pairSum(ListNode head) {
        int length=0;
        ListNode temp=head;
        while(temp!=null){
            length++;
            temp=temp.next;
        }
        temp=head;
        ListNode middle=null;
        for(int i=1;i<=length/2;i++){
            ListNode upcoming=temp.next;
            temp.next=middle;
            middle=temp;
            temp=upcoming;
        }
        int maxSum=0;
        while(temp!=null){
            int sum=middle.val+temp.val;
            if(sum>maxSum) maxSum=sum;
            temp=temp.next;
            middle=middle.next;
        }
        return maxSum;
    }
}