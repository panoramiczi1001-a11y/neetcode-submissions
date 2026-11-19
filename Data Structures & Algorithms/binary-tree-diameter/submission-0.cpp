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
    int diameter = 0;
    int DFS(TreeNode* root)
    {
        if(!root) return 0;
        int lHeight = DFS(root->left);
        int rHeight = DFS(root->right);
        diameter = max(diameter, lHeight + rHeight);
        return max(lHeight,rHeight) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        DFS(root);
        return diameter;
    }
};
