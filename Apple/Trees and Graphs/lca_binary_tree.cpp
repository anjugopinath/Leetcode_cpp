//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/discuss/65375/Very-simple-dfs-c%2B%2B-solution-only-10-lines
/*
Success
Details 
Runtime: 36 ms, faster than 13.40% of C++ online submissions for Lowest Common Ancestor of a Binary Tree.
Memory Usage: 14.2 MB, less than 86.45% of C++ online submissions for Lowest Common Ancestor of a Binary Tree.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   TreeNode * dfsTraverse(TreeNode * root, TreeNode * p , TreeNode * q)
{
    if( root == p || root == q || root == NULL)
        return root;
    TreeNode * parent1 = dfsTraverse(root->left, p, q);
    TreeNode * parent2 = dfsTraverse(root->right, p, q);
    if( parent1 && parent2)
        return root;
    else
        return parent1 ? parent1:parent2;
}
TreeNode * lowestCommonAncestor(TreeNode * root, TreeNode * p, TreeNode * q)
{
    return dfsTraverse(root, p, q);
}
};
