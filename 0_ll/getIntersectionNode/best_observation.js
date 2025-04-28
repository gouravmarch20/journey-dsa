/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function (headA, headB) {
  let a = headA;
  let b = headB;

  // Traverse both lists together until one ends or they meet
  while (a && b) {
    if (a === b) {
      return a;
    }
    a = a.next;
    b = b.next;
  }

  // Determine which list is longer and get the remaining length
  let aLength = 0,
    bLength = 0;
  a = headA;
  b = headB;

  while (a) {
    aLength++;
    a = a.next;
  }

  while (b) {
    bLength++;
    b = b.next;
  }

  // Reset heads
  a = headA;
  b = headB;

  // Advance the longer list to make both lists the same length
  if (aLength > bLength) {
    for (let i = 0; i < aLength - bLength; i++) {
      a = a.next;
    }
  } else {
    for (let i = 0; i < bLength - aLength; i++) {
      b = b.next;
    }
  }

  // Traverse together to find intersection
  while (a !== b) {
    a = a.next;
    b = b.next;
  }

  return a; // Could be null or the intersection node
};
