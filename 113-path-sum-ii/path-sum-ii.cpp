/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, int targetSum, int currSum, vector<int> path,
               vector<vector<int>>& ans) {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL) {
            path.push_back(root->val);
            currSum += root->val;
            if (currSum == targetSum) {
                ans.push_back(path);
            }
        return;
        }
        // include current node
        path.push_back(root->val);
        currSum += root->val;
        solve(root->left, targetSum, currSum, path, ans);
        solve(root->right, targetSum, currSum, path, ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        int sum = 0;
        vector<int> temp;
        solve(root, targetSum, sum, temp, ans);
        return ans;
    }
};