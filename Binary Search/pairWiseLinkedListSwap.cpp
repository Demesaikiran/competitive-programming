/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {

    if (node == NULL or node->next == NULL) return node;
    LLNode* p1 = NULL; p1 = node;
    LLNode* p2 = NULL; p2 = p1;
    int temp;

    while (p1 != NULL and p1 -> next != NULL) {
        p2 = p1 -> next;
        temp = p2->val;
        p2 -> val = p1->val;
        p1 -> val = temp;
        p1 = p2 -> next;
        
    }

    return node;
}