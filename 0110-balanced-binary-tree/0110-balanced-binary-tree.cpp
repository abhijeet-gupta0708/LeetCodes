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
int height(TreeNode * root, bool & valid)
{
    if(!root) return 0;

    int left=height(root->left,valid);
    int right=height(root->right,valid);

    if(abs(left-right)>1)
    valid=false;

    return 1+max(left,right);
}
class Solution {
public:
    bool isBalanced(TreeNode* root) {

        // Checklist of Blanced binary tree is its hieght at all nodes should be (-1,0,1);

        bool valid=true;

        int ans;
        ans=height(root,valid);

        return valid;


        
    }
};