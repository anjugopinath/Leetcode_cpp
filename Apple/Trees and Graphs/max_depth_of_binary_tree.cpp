//https://leetcode.com/explore/interview/card/apple/350/trees-and-graphs/3119/

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
    int global_height=0;
    int maxDepth(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        maxDepthHelper(root,0);
        return global_height;
    }
    void maxDepthHelper(TreeNode* root, int height)
    {
        height+=1;
        if(height>global_height)
            global_height=height;
        if(root->left)
            maxDepthHelper(root->left,height);
        if(root->right)
            maxDepthHelper(root->right,height);
    }
};
