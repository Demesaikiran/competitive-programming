/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {

    if(node == NULL) return NULL;
    if(node->next == NULL) return node;

    
    LLNode* temp = NULL; temp = node -> next;
    node -> next =NULL;
    LLNode* store = NULL; store = temp;

    while(temp != NULL)
    {
        store = temp -> next;
        temp -> next = node;
        node = temp;
        temp = store;
    }
    return node;
}