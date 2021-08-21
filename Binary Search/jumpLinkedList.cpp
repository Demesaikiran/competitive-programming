/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    if (node == NULL) return NULL;

    LLNode* temp = NULL;
    temp = node;

    while (temp->next != NULL and (temp != NULL)) {
        int value = temp->val;
        LLNode* iterate = NULL;
        iterate = temp;
        while (iterate->next != NULL and value != 0) {
            iterate = iterate->next;
            value--;
        }
        if (value != 0) {
            temp->next = NULL;
            break;
        }
        temp->next = iterate;
        temp = temp->next;
    }

    return node;
}