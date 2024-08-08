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
  vector<int> recInTrav(TreeNode* node, vector<int> v) {
    if(node == NULL) return v;

    if(node->left != NULL) v = recInTrav(node->left, v);
    
    v.push_back(node->val);

    if(node->right != NULL) v = recInTrav(node->right, v);

    return v;
  }


  vector<int> inorderTraversal(TreeNode* root) {
    vector<int> ans (0,0);
    return recInTrav(root, ans);
  }
};
