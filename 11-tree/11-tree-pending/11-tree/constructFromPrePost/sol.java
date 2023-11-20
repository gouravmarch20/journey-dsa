// /**
//  * Definition for a binary tree node.
//  * public class TreeNode {
//  *     int val;
//  *     TreeNode left;
//  *     TreeNode right;
//  *     TreeNode() {}
//  *     TreeNode(int val) { this.val = val; }
//  *     TreeNode(int val, TreeNode left, TreeNode right) {
//  *         this.val = val;
//  *         this.left = left;
//  *         this.right = right;
//  *     }
//  * }
//  */
// class Solution {
//     HashMap<Integer,Integer> h;
//     int i;
//     public TreeNode constructBT(int[] postorder,int start,int end){
//         if(start>end) return null;
//         TreeNode root=new TreeNode(postorder[i]);
//         int idx=h.get(postorder[i]);
//         i--;
//         root.right=constructBT(postorder,idx+1,end);
//         root.left=constructBT(postorder,start,idx-1);
//         return root;

//     }
//     public TreeNode buildTree(int[] inorder, int[] postorder) {
//         i=postorder.length-1;
//         h=new HashMap<>();
//         for(int i=0;i<inorder.length;i++){
//             h.put(inorder[i],i);
//         }
//         return constructBT(postorder,0,postorder.length-1);
//     }
// }