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
var levelOrder = function (root) {
  let queue = [];
  let result = [];
  if (root == null) return [];

  queue.push(root);

  while (queue.length) {
    let currLevelL = queue.length;
    let currArr = [];

    for (let i = 0; i < currLevelL; i++) {
      let curr = queue.shift();
      currArr.push(curr.val);
      if (curr && curr.left) {
        queue.push(curr.left);
      }
      if (curr && curr.right) {
        queue.push(curr.right);
      }
    }

    result.push(currArr);
  }

  return result;
};
