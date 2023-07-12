/*
    Date: Jul 12, 2023
    Problem link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
*/
#include <stdio.h>
#define max(a, b) a > b ? a : b

/* Definition of a TreeNode */
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

/* maxDepth: return the maximum depth of a binary tree */
int maxDepth(struct TreeNode* root)
{
    int l_depth = 0, r_depth = 0;

    if (root == NULL)
        return 0;

    l_depth = 1 + maxDepth(root->left);
    r_depth = 1 + maxDepth(root->right);

    return max(l_depth, r_depth);
}

