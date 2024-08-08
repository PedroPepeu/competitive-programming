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
  TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
    queue<TreeNode*> q;
    q.push(cloned);

    while(!q.empty()) {
      TreeNode* current;

      current = q.front();
      q.pop();

      if(current->left != NULL) q.push(current->left);
      if(current->right != NULL) q.push(current->right);

      if(current->val == target->val) {
        return current;
      }
    }

    return 0;
  }
};
