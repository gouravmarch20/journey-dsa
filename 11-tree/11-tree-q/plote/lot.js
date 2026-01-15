/**
 * // Definition for a _Node.
 * function _Node(val, left, right, next) {
 *    this.val = val === undefined ? null : val;
 *    this.left = left === undefined ? null : left;
 *    this.right = right === undefined ? null : right;
 *    this.next = next === undefined ? null : next;
 * };
 */

/**
 * @param {_Node} root
 * @return {_Node}
 */
var connect = function (root) {
  if (!root) return root;

  let queue = [root];

  while (queue.length > 0) {
    let size = queue.length;
    let prev = null;

    while (size--) {
      let node = queue.shift();

      if (prev !== null) {
        prev.next = node; // connect previous node in level to current
      }
      console.log("__", node.val, prev);

      prev = node;

      if (node.left) queue.push(node.left);
      if (node.right) queue.push(node.right);
    }

    // last node in level → next = null
    console.log("__");
    prev.next = null;
  }

  return root;
};
