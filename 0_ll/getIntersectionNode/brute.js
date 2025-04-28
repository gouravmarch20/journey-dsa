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
  const visited = new Set();

  // Traverse list A and store all nodes in the set
  let currentA = headA;
  while (currentA !== null) {
    visited.add(currentA);
    currentA = currentA.next;
  }

  // Traverse list B and check if any node is already in the set
  let currentB = headB;
  while (currentB !== null) {
    if (visited.has(currentB)) {
      return currentB; // Intersection found
    }
    currentB = currentB.next;
  }

  return null; // No intersection
};
