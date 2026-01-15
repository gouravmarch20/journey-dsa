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
  queue.push(root);
  if (root) queue.push(null);
  let temp = [];
  while (queue.length) {
    let curr = queue.shift();
    if (curr) {
      temp.push(curr.val);
    }
    if (curr && curr.left) {
      queue.push(curr.left);
    }
    if (curr && curr.right) {
      queue.push(curr.right);
    }
    //queue.length > 1 &&
    //! stuck how to handle null __ making infine loop 40 min debug 
    if (queue.length == 0 && curr == null) {
    } else if (curr == null) {
        //! m2 :: must required to use spread operator
      const newC = [...temp];
      result.push(newC);
      temp = [];
      queue.push(null);
    }
  }

  if (temp?.length) {
    const newC = [...temp];
    result.push(newC);
  }

  return result;
};
