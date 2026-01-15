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
 * @return {number[]}
 */

var inorderTraversal = function (root) {
  let stack = [];
  let result = [];
  stack.push(root);
  let curr = root;
  while (stack.length) {
    console.log("dt1", curr?.val);
    while (curr && curr.left) {
      stack.push(curr.left);
      curr = curr.left;
    }
    //
    let top = stack.pop();
    if (top) {
      result.push(top.val);
    }
    if (top && top.right) {
      stack.push(top.right);
      curr = top.right;
    }
  }
  return result;
};
