/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
            vector<int>result;
    if(!root) return result;
    vector<int>temp1 = inorderTraversal(root->left);
    result.insert(result.end(),temp1.begin(),temp1.end());
    result.push_back(root->val);
    
    vector<int>temp2 = inorderTraversal(root->right);
    result.insert(result.end(),temp2.begin(),temp2.end());
    return result;
    }
};