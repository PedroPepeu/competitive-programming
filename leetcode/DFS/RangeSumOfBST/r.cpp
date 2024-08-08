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

  int rangeSumBST(TreeNode* root, int low, int high) {
    queue<TreeNode*> q;
    q.push(root);
    int ans = 0;

    while(!q.empty()) {
      TreeNode* current = q.front();
      q.pop();

      if(current->left != NULL) q.push(current->left);
      if(current->right != NULL) q.push(current->right);

      int val = current->val;
      if(val >= low && val <= high) ans+=val;
    }

    return ans;
  }
};
