/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var oddEvenList = function (head) {
  if (head == null || head.next == null) return head;

  let evenHead = head.next;
  let even = head.next;
  let odd = head;
  let prevOdd = null;

  while (even && even.next) {
    odd.next = even.next;
    odd = odd.next;
    //
    even.next = odd.next;
    even = even.next;
  }
  odd.next = evenHead;
  return head;
};
