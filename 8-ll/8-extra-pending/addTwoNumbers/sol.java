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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        // ListNode left=l1,right=l2;
        // int carry=0;
        // ListNode res=new ListNode();
        // ListNode head=res;
        // while(left!=null || right!=null){
        //     if(right==null){
        //         int ans=left.val+carry;
        //         if(ans>9){
        //             ListNode temp=new ListNode(ans%10);
        //             carry=1;
        //             res.next=temp;
        //             res=res.next;
        //         }else{
        //             ListNode temp=new ListNode(ans);
        //             carry=0;
        //             res.next=temp;
        //             res=res.next;
        //         }
        //         left=left.next;
        //     }
        //     else if(left==null){
        //         int ans=right.val+carry;
        //         if(ans>9){
        //             ListNode temp=new ListNode(ans%10);
        //             carry=1;
        //             res.next=temp;
        //             res=res.next;
        //         }else{
        //             ListNode temp=new ListNode(ans);
        //             carry=0;
        //             res.next=temp;
        //             res=res.next;
        //         }
        //         right=right.next;
        //     }
        //     else{
        //         int ans=left.val+right.val+carry;
        //         if(ans>9){
        //             ListNode temp=new ListNode(ans%10);
        //             carry=1;
        //             res.next=temp;
        //             res=res.next;
        //         }else{
        //             ListNode temp=new ListNode(ans);
        //             carry=0;
        //             res.next=temp;
        //             res=res.next;
        //         }
        //         left=left.next;
        //         right=right.next;
        //     }
        // }
        // if(carry==1){
        //     ListNode temp=new ListNode(1);
        //     res.next=temp;
        // }
        // return head.next;

        ListNode left=l1,right=l2;
        int carry=0;
        ListNode res=new ListNode();
        ListNode head=res;
        while(left!=null || right!=null || carry!=0){
            int sum=0;
            if(left!=null){
                sum+=left.val;
                left=left.next;
            }
            if(right!=null){
                sum+=right.val;
                right=right.next;
            }
            sum+=carry;
            if(sum>9) carry=1;
            else carry=0;
            ListNode temp=new ListNode(sum%10);
            res.next=temp;
            res=res.next;
        }
        return head.next;
    }
}