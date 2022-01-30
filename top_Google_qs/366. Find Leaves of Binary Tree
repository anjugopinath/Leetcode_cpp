/*
Given the root of a binary tree, collect a tree's nodes as if you were doing this:

Collect all the leaf nodes.
Remove all the leaf nodes.
Repeat until the tree is empty.

Input: root = [1,2,3,4,5]
Output: [[4,5,3],[2],[1]]
Explanation:
[[3,5,4],[2],[1]] and [[3,4,5],[2],[1]] are also considered correct answers since per each level it does not matter the order on which elements are returned.
*/

/*
Success
Details 
Runtime: 9 ms, faster than 7.49% of C++ online submissions for Find Leaves of Binary Tree.
Memory Usage: 9.1 MB, less than 22.73% of C++ online submissions for Find Leaves of Binary Tree.
*/

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
    vector<vector<int>> list_of_nodes;
public:
    
    int getHeight(TreeNode* root)
    {
         if(!root)
            return -1;
         int leftHeight=getHeight(root->left);
             
     int rightHeight=getHeight(root->right);
         
  int currHeight=max(leftHeight,rightHeight)+1;
        
if(this->list_of_nodes.size()==currHeight)
{
   this->list_of_nodes.push_back({});
}
         this->list_of_nodes[currHeight].push_back(root->val);
        
return currHeight;
    
    }
    vector<vector<int>> findLeaves(TreeNode* root) {
        
       this->list_of_nodes.clear();
    getHeight(root);
        return this->list_of_nodes;
       
        
    }
};
