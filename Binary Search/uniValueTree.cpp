/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool countNodes(Tree* root, int& count) {
    if (root == NULL) return true;

    bool left = countNodes(root->left, count);
    bool right = countNodes(root->right, count);

    if (!left || !right) return false;

    if (root->left && root->val != root->left->val) return false;
    if (root->right && root->val != root->right->val) return false;

    count++;
    return true;
}
int solve(Tree* root) {
    int count = 0;

    countNodes(root, count);

    return count;
}