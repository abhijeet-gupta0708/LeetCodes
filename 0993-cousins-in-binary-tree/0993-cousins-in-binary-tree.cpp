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
bool parent(TreeNode* root, int x, int y)
 {
    if(!root) return true;

    if(root->left && root->right)
    {
        if(root->left->val==x && root->right->val==y)
        return false;
        if(root->left->val==y && root->right->val==x)
        return false;
    }

    return parent(root->left,x,y) && parent(root->right,x,y);

 }
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {

        // Just check if the levels are same and the parents are not equal 

        /// Checking the Levels are equal 

        int l1=-1,l2=-1,level=0;
        TreeNode * node=root;
        queue<TreeNode*>qu;
        if(!root) return false;
        qu.push(root);

        while(!qu.empty())
        {
            int n=qu.size();
            while(n--)
            {
                TreeNode * temp=qu.front();
                qu.pop();
                if(temp->val==x)
                l1=level;
                if(temp->val==y)
                l2=level;

                if(temp->left) qu.push(temp->left);
                if(temp->right) qu.push(temp->right);


            }
                level++;
        }
        if(l1==-1 || l2==-1) return false;
        if(l1!=l2) return false;
        return parent(root,x,y);
        
    }
};