//https://binarysearch.com/problems/Linked-List-to-ZigZag-Tree-Path
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
Tree* solve(LLNode* node) {
    LLNode* tr = node;

    Tree* result = NULL;
    result = new Tree();

    if (node == NULL) return NULL;

    result->val = node->val;
    result->right = result->left = NULL;

    Tree* tnode = NULL;
    tnode = new Tree();
    tnode = result;

    while (tr->next != NULL) {
        Tree* temp = NULL;
        temp = new Tree();

        temp->val = (tr->next)->val;
        temp->right = temp->left = NULL;

        if ((tr->next)->val >= tr->val) {
            tnode->right = temp;
            tnode = tnode->right;
        } else {
            tnode->left = temp;
            tnode = tnode->left;
        }
        tr = tr->next;
    }

    return result;
}