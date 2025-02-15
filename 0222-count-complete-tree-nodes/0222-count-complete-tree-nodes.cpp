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
    void find(TreeNode* root,int &c){
        if(!root) return ;
        if(root->left){
            c++;
            find(root->left,c);
        }
        if(root->right){
            c++;
            find(root->right,c);
        }
    }
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int c=1;
        find(root,c);
        return c;  
    }
};