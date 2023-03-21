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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || p->val == root->val || q->val == root->val)
            return root;
        if (p->val < root->val && q->val < root->val)
                return lowestCommonAncestor(root->left, p, q);
        if (p->val > root->val && q->val > root->val)
                return lowestCommonAncestor(root->right, p, q); 
        return root;
    }
};


//----------------------------------------------for non-BST------------------------------------------------
// class Solution {
// public:
//     TreeNode* ans = nullptr;

//     TreeNode* help(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root == nullptr) return nullptr;
//         if(root == p || root == q) return root;
//         auto left = help(root->left, p, q);
//         auto right = help(root->right, p, q);
//         if(left != nullptr && right != nullptr) {
//             ans = root;
//             return ans;
//         }
//         if(!left) return right;
//         return left;
//     }

//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         TreeNode* first = help(root, p, q);
//         if(!first) return nullptr;
//         if(ans != nullptr) return ans;
//         return first;
//     }
// };