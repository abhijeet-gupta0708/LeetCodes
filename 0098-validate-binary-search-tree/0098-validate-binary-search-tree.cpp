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
    long long nums=LLONG_MIN;
    bool check(TreeNode * node)
    {
        if(node==nullptr) return true;
       if(! check(node->left))return false;
        if(nums<node->val)
        {
            nums=node->val;
        }
        else return false;
       if(! check(node->right)) return false;
        return true;
    }
    bool isValidBST(TreeNode* root) {
       // check(root);
        return check(root);
        
    }
};