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

void rightview(TreeNode * root, vector<int>&ans)
{
    if(!root) return ;
    queue<TreeNode*>qu;
    qu.push(root);
    while(!qu.empty())
    {
        ans.push_back(qu.front()->val);
        int n=qu.size();

        while(n--)
        {
            TreeNode* temp=qu.front();
            qu.pop();
            if(temp->right) qu.push(temp->right);
            if(temp->left) qu.push(temp->left);

        }
    }
}
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {

        vector<int>ans;
        rightview(root,ans);

        return ans;
        
    }
};