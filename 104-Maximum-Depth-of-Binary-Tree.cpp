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
    int dfs(TreeNode* root){
        if(!root) return 0;
        int r=1;
        if(root->left){
            r=max(r,dfs(root->left)+1);
        }
        if(root->right){
            r=max(r,dfs(root->right)+1);
        }
        return r;
    }
    int maxDepth(TreeNode* root) {
        return dfs(root); 
    }
};