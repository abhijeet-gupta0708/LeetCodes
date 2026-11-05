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

TreeNode * Tree(vector<int>& inorder, vector<int>& postorder,int in_start,int in_end,int index)
{
    if(in_start>in_end) return nullptr;

    TreeNode * root=new TreeNode(postorder[index]);

    int pos=find(inorder.begin(),inorder.end(),postorder[index])-inorder.begin();
    int leftnodes=in_end-pos;
    // No of Left Nodes


    root->right=Tree(inorder,postorder,pos+1,in_end,(index-1));
    root->left=Tree(inorder,postorder,in_start,pos-1,index-leftnodes-1);

    return root;
}
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        int n=inorder.size();
        return Tree(inorder,postorder,0,n-1,n-1);
        
    }
};