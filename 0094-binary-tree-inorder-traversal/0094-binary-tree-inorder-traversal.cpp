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
    void preorder(TreeNode * temp ,vector<int>&ans)
    {
        if(temp==nullptr) return ;

        preorder(temp->left,ans);
        ans.push_back(temp->val);
        preorder(temp->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int>ans;
        preorder(root,ans);
        return ans;
        
    }
};