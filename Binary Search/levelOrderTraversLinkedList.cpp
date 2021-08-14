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
LLNode* solve(Tree* root) {
    if (root == NULL) return NULL;
    queue<Tree*> qu;
    int value;
    LLNode* head = NULL;
    qu.push(root);

    LLNode* temp;

    while (!qu.empty()) {
        LLNode* tnode = NULL;
        tnode = new LLNode();
        tnode->next = NULL;
        Tree* node = qu.front();
        qu.pop();

        if (head != NULL) {
            value = node->val;
            tnode->val = value;
            temp->next = tnode;
            temp = temp->next;
        } else {
            head = new LLNode();
            head->val = node->val;
            head->next = NULL;
            temp = head;
        }

        if (node->left != NULL) qu.push(node->left);
        if (node->right != NULL) qu.push(node->right);
    }

    return head;
}