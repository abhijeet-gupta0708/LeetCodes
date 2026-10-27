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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {

        vector<vector<int>>ans;

        if(root==nullptr) return ans;

        queue<TreeNode *>qu;
        qu.push(root);
        while(!qu.empty())
        {
            vector<int>temp;
            TreeNode * tree;
            int s=qu.size();

            for(int i=0;i<s;i++)
            {
                tree=qu.front();
                qu.pop();
                temp.push_back(tree->val);

                if(tree->left) qu.push(tree->left);
                if(tree->right) qu.push(tree->right);

            }
            ans.push_back(temp);
        }    
        reverse(ans.begin(),ans.end());
        return ans;    
    }
};