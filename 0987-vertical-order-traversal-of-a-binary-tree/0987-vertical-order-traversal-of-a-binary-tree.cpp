
class Solution {
public:

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        if (root == nullptr) return {};

        map<int, map<int, multiset<int>>> mpp;

        queue<pair<TreeNode*, pair<int,int>>> q;

        // {Node, {Row, Column}}
        q.push({root, {0, 0}});

        while (!q.empty()) {

            TreeNode* curr = q.front().first;

            int row = q.front().second.first;
            int col = q.front().second.second;

            q.pop();

            // Store node according to column and row
            mpp[col][row].insert(curr->val);

            if (curr->left) {
                q.push({curr->left, {row + 1, col - 1}});
            }

            if (curr->right) {
                q.push({curr->right, {row + 1, col + 1}});
            }
        }

        vector<vector<int>> ans;

        // Extract values column by column
        for (auto it : mpp) {

            vector<int> temp;

            for (auto row : it.second) {

                for (auto val : row.second) {
                    temp.push_back(val);
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
