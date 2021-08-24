/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

bool symmetric(Tree* root1, Tree* root2) {
    if (root1 == NULL && root2 == NULL) return true;
    if (root1 == NULL || root2 == NULL) return false;
    if (root1->val != root2->val) return false;

    return symmetric(root1->left, root2->right) && symmetric(root1->right, root2->left);
}
bool solve(Tree* root) {
    return symmetric(root, root);
}