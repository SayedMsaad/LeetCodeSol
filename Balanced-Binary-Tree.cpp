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
    int solve(TreeNode* root){
        if(!root) return 0;

        int left=solve(root->left);
        int right=solve(root->right);

        if(abs(left-right)>1 || (left == -1 || right== -1)){
        cout << left << \ \ << right<< \ \;
           return -1;
        }

        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {


        int height=solve(root);
        return height==-1?false:true;
    }
};