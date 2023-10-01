// package 11-tree-lc.addOneRow;

// public /**
// * Definition for a binary tree node.
// * public class TreeNode {
// *     int val;
// *     TreeNode left;
// *     TreeNode right;
// *     TreeNode() {}
// *     TreeNode(int val) { this.val = val; }
// *     TreeNode(int val, TreeNode left, TreeNode right) {
// *         this.val = val;
// *         this.left = left;
// *         this.right = right;
// *     }
// * }
// */
// class Solution {
//    public TreeNode addOneRow(TreeNode root, int val, int depth) {
//        if(depth==1) {
//            TreeNode temp=new TreeNode(val);
//            if(root==null)return temp;
//            else{
//                temp.left=root;
//                return temp;
//            }
//            // else if(right==null){
//            //     temp.left=root;
//            //     return temp;
//            // }
//            // else {
//            //     temp.left
//            // }
//        }
//        List<TreeNode> res=new ArrayList<>();
//        Queue<TreeNode> q=new LinkedList<>();
//        q.add(root);
//        int count=1;
//        while(q.size()!=0){
//            count++;
//            List<TreeNode> al=new ArrayList<>();
//            int size=q.size();
//            for(int i=0;i<size;i++){
//                TreeNode temp=q.remove();
//                if(temp.left!=null) q.add(temp.left);
//                if(temp.right!=null) q.add(temp.right);
//                al.add(temp);
//            }
//            res.clear();
//            res=al;
//            if(count==depth){
//                break;
//            }
//        }

//        for(int i=0;i<res.size();i++){
//            TreeNode leftsb=res.get(i).left;
//            TreeNode rightsb=res.get(i).right;
//            TreeNode newNode1=new TreeNode(val);
//            newNode1.left=leftsb;
//            TreeNode newNode2=new TreeNode(val);
//            newNode2.right=rightsb;
//            res.get(i).left=newNode1;
//            res.get(i).right=newNode2;

//        }
//        return root;
//    }
// } {
    
// }
