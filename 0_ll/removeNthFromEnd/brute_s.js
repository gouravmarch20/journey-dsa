/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function (head, n) {
  if (head == null) return head;
  let cnt = 0;
  let curr = head;
  while (curr) {
    cnt++;
    curr = curr.next;
  }
  console.log("l", cnt);

  let indexToRemove = cnt - n;
  //! most imp
  if (indexToRemove === 0) return head.next;

  let rCnt = 0;
  let prev = new ListNode();
  // ! reinit
  curr = head;
  while (curr && curr.next && rCnt <= indexToRemove) {
    if (rCnt == indexToRemove) {
      curr.next = curr.next.next;
      break;
    }
    prev = curr;

    curr = curr.next;
  }

  return head;
};
