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

TreeNode * Tree(vector<int>& preorder, vector<int>& inorder,int in_start,int in_end,int index)
{
    if(in_start>in_end) return nullptr;

    TreeNode *root=new TreeNode (preorder[index]);

    // Finding the position of preorder[index] in inorder array

    int pos=find(inorder.begin(),inorder.end(),preorder[index])-inorder.begin();

    // Left Side of Tree 


    root->left=Tree(preorder,inorder,in_start,pos-1,index+1);

    int leftnode=pos-in_start;// No of node in left side

    // Right Side of Tree
    root->right=Tree(preorder,inorder,pos+1,in_end,(index+leftnode+1));

    return root;
}
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int n=preorder.size();
        return Tree(preorder,inorder,0,n-1,0);
    }
};