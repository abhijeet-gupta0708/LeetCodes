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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>>ans;
        if( root ==nullptr) return ans;

        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty())
        {
            int s=qu.size();
            vector<int>list;
            for(int i=0;i<s;i++)
            {
                TreeNode * node=qu.front();
                qu.pop();
                if(node->left!=NULL) qu.push(node->left);
                if(node->right!=NULL) qu.push(node->right);
                list.push_back(node->val);
            }
            ans.push_back(list);
        }

        return ans;
        
    }
};