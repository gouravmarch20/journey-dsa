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
  if (root == null) return root;
  root.next = null;
  function traversal(root) {
    if (root == null) return;

    if (root.left) {
      root.left.next = root.right;
    }
    if (root.right && root.next == null) {
      root.right.next = null;
    } else if (root.right) {
        // ! thinking of pre using left 
      root.right.next = root.next.left;
    }
    traversal(root.left);
    traversal(root.right);
  }
  traversal(root);
  return root;
};
