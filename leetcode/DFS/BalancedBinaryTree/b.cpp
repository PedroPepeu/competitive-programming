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
  int maxDepth(TreeNode* node) {
    if(node == NULL) return 0;
    return max(maxDepth(node->left), maxDepth(node->right)) + 1;
  }

  bool isBalanced(TreeNode* root) {
    if(root == NULL) return true;
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()) {
      TreeNode* current = q.front();
      q.pop();
      
      if(abs(maxDepth(current->right)-(maxDepth(current->left))) > 1) return false;

      if(current->right != NULL) q.push(current->right);
      if(current->left != NULL) q.push(current->left);
    }

    return true;
  }
};
