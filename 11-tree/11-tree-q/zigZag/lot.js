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
 * @return {number[][]}
 */
var zigzagLevelOrder = function (root) {
  let queue = [];
  let result = [];
  if (root == null) return [];
  queue.push(root);
  let level = false;

  //

  while (queue.length) {
    let levelArr = [];
    let qL = queue.length;
    for (i = 0; i < qL; i++) {
      // let top = queue.pop();
      let top = queue.shift();

      levelArr.push(top.val);
      if (top.left) queue.push(top.left);
      if (top.right) queue.push(top.right);
    }
    if (level) {
      levelArr.reverse();
    }
    result.push(levelArr);
    level = !level;
  }
  console.log("debug__9", result);
  return result;
};
