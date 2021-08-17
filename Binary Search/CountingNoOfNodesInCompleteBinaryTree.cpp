//https://binarysearch.com/problems/Count-Nodes-in-Complete-Binary-Tree

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool is_exists(Tree* root, int h, int nodes) {
    Tree* node = root;
    int left = 0, right = pow(2, h) - 1;

    for (int i = 0; i < h; i++) {
        int mid = left + (right - left) / 2;

        if (nodes <= mid) {
            node = node->left;
            right = mid;
        } else {
            node = node->right;
            left = mid + 1;
        }
    }

    return node != NULL;
}
int height(Tree* root) {
    if (!root) return 0;
    Tree* node = root;
    int count = 0;
    while (node) {
        count++;
        node = node->left;
    }

    return count;
}

int solve(Tree* root) {
    if (!root) return 0;
    if (!root->left && !root->right) return 1;

    int h = height(root) - 1;

    int last_before_nodes = pow(2, h) - 1;

    int left = 1, right = last_before_nodes;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (is_exists(root, h, mid))
            left = mid + 1;
        else
            right = mid - 1;
    }

    return last_before_nodes + left;
}