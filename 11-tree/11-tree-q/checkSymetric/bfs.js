/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {boolean}
 */
var isSymmetric = function (root) {
  let queue = [];
  queue.push(root.left);
  queue.push(root.right);
  while (queue.length) {
    let first = queue.pop();
    let second = queue.pop();
    //
    if (!first && !second) continue;
    if (!first || !second) return false;
    if (first.val != second.val) return false;
    //
    queue.push(first.left);
    queue.push(second.right);
    queue.push(first.right);
    queue.push(second.left);
  }
  return true;
};
