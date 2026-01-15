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
var rightSideView = function (root) {
  let rightV = [],
    queue = [];
  if (root == null) return rightV;
  queue.push(root);
  while (queue.length) {
    let qL = queue.length;
    let currLevel = [];
    for (let i = 0; i < qL; i++) {
      // !m2 :: using pop
      let top = queue.shift();
      // console.log("debug", top.val)
      //!m1:: write value here 10 min debug
      currLevel.push(top.val);
      if (top.left) queue.push(top.left);
      if (top.right) queue.push(top.right);
    }
    rightV.push(currLevel[currLevel.length - 1]);
  }
  return rightV;
};
