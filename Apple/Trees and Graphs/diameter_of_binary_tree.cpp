//https://leetcode.com/explore/interview/card/apple/350/trees-and-graphs/3122/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameter=0;
    int diameterOfBinaryTree(TreeNode* root) 
    {
        
        diameterOfBinaryTreeHelper(root);
        return diameter;
    }
    int diameterOfBinaryTreeHelper(TreeNode* root)
    {
        if(!root)
            return 0;
        
        int left_height=diameterOfBinaryTreeHelper(root->left);
        int right_height=diameterOfBinaryTreeHelper(root->right);
        if(left_height+right_height>diameter)
            diameter = left_height+right_height;
        return max(left_height,right_height)+1;
    }
};
