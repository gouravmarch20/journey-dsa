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
    public boolean isPalindrome(ListNode head) {
       if(head==null || head.next==null) return true;
       int length=0;
       ListNode temp=head;
       while(temp!=null){
           length++;
           temp=temp.next;
       }
       temp=head;
    //    if(length==3){
    //        if(temp.val==temp.next.next.val){
    //            return true;
    //        }
    //        else return false;
    //    }
       
       //System.out.println(length);
       ListNode middle=null;
       for(int i=1;i<=length/2;i++){
            ListNode upcoming=temp.next;
            temp.next=middle;
            middle=temp;
            temp=upcoming;
        }
        if(length%2!=0){
            temp=temp.next;
        }
            //System.out.println(temp.val+" " +middle.val);
        while(temp!=null && middle!=null){
            if(temp.val!=middle.val){
                return false;
            }
                //System.out.println(temp.val+" " +middle.val);
            temp=temp.next;
            middle=middle.next;
        }
        return true;
    }
}