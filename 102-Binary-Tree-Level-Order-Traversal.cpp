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
        vector<vector<int>> r;
        levelorder1(root,0,r);
        return r;  
    }
    void levelorder1(TreeNode* node,int l,vector<vector<int>> &r){
        if(node==nullptr) return;
        if(l==r.size()){
            r.push_back(vector<int>());
        }
        r[l].push_back(node->val);
        levelorder1(node->left,l+1,r);
        levelorder1(node->right,l+1,r);
    }
};