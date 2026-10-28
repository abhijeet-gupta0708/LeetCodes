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
 void compare(TreeNode * root,vector<int>&leaves)
 {
    if(!root) return ;
    if(!root->left && !root->right)
    leaves.push_back(root->val);
    compare(root->left,leaves);
    //compare(root->left,leaves);
    compare(root->right,leaves);
 }
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int>leaf2;
        vector<int>leaf1;
        compare(root1,leaf1);
        compare(root2,leaf2);

        return (leaf1==leaf2);
        
    }
};