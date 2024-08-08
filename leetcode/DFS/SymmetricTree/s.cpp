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
  vector<pair<int,int>> dfsL(TreeNode* node) {
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

  vector<pair<int,int>> dfsR(TreeNode* node) {
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

      q.push(current->right);
      q.push(current->left);

      v.push_back(make_pair(current->val, i));
    }

    return v;
  }

  bool isSymmetric(TreeNode* root) {
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL) return true;
    else if(root->left == NULL || root->right == NULL) return false;

    vector<pair<int,int>> rr = dfsL(root->left);
    vector<pair<int,int>> rl = dfsR(root->right);

    if(rr.size() != rl.size()) return false;
    for(int i = 0; i < rr.size(); i++) {
      if(rr[i] != rl[i]) return false;
    }
    return true;
  }
};
