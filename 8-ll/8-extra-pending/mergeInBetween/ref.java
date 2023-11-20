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
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
    //     ListNode temp1=list1,temp2=list1;
    //     for(int i=1;i<=b;i++){
    //         temp2=temp2.next;
    //     }
    //     if(temp2!=null){
    //         temp2=temp2.next;
    //     }
    //     //ListNode prev=null;
    //     for(int i=1;i<a;i++){
    //         //prev=temp1;
    //         temp1=temp1.next;
    //     }
    //     temp1.next=list2;
    //     temp1=list1;
    //     while(temp1.next!=null){
    //         temp1=temp1.next;
    //     }
    //     temp1.next=temp2;
    // return list1;
    ListNode left=list1;
    for(int i=1;i<a;i++){
        left=left.next;
    }
    ListNode right=left;
    for(int i=a-1;i<=b;i++){
        right=right.next;
    }
    left.next=list2;
    ListNode temp=list1;
    while(temp.next!=null){
        temp=temp.next;
    }
    temp.next=right;
    return list1;
    }
}