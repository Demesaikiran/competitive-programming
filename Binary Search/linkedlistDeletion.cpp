//https://binarysearch.com/problems/Linked-List-Deletion

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node, int target) {
    if (!node) return node;

    LLNode* temp = node;
    LLNode* prev = node;

    while (temp != NULL) {
        if (temp->val == target) {
            if (temp == node) {
                node = node->next;
                temp = node;
                prev = node;
            }

            else {
                prev->next = temp->next;
                temp = temp->next;
            }
        } else {
            if (temp != prev) prev = prev->next;
            temp = temp->next;
        }
    }
    return node;
}