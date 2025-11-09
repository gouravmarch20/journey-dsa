/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} val
 * @return {ListNode}
 */
var removeElements = function (head, val) {
  let prev = null;
  let curr = head;
  while (curr) {
    if (curr.val == val) {
      if (prev) {
        prev.next = curr.next;
      } else {
        // !m1
        head = head.next;
      }
    } else {
      // !m2
      prev = curr;
    }
    curr = curr.next;
  }
  // !m3

  if (prev === null) return prev;
  return head;
};
