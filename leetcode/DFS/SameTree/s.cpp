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
  vector<pair<int,int>> dfs(TreeNode* node) {
    vector<pair<int,int>> v (0, make_pair(0,0));
    if(node == NULL) return v;

    queue<TreeNode*> q;
    q.push(node);
    int i = 0;

    while(!q.empty()) {
      i++;

      if(q.front() == NULL) {
        q.pop();
        continue;
      }
      TreeNode* current = q.front();
      q.pop();

      q.push(current->left);
      q.push(current->right);

      v.push_back(make_pair(current->val, i));
    }

    return v;
  }

  bool isSameTree(TreeNode* p, TreeNode* q) {
    if(dfs(p) == dfs(q)) return true;
    else return false;
  }
};
