#include "solution.hpp"
using namespace std;

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
class Solution {
    public:
  pair<int, long long> dfs(Tree* root) {
    if(root == NULL) {
      return {0, -1e18};
    }
    pair<int, long long> lhs = dfs(root->left);
    pair<int, long long> rhs = dfs(root->right);
    return {
      lhs.first + rhs.first + (root->val >= max(lhs.second, rhs.second)),
      max((long long)root->val, max(lhs.second, rhs.second))
    };
  }
  int solve(Tree* root) {
    return dfs(root).first;
  }
};
