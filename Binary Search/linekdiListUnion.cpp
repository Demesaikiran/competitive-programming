//https://binarysearch.com/problems/Linked-List-Union


/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* ll0, LLNode* ll1) {
    if (!ll0) return ll1;
    if (!ll1) return ll0;

    LLNode* root = new LLNode(); root->next = NULL;
    LLNode* temp = new LLNode(); temp = root;

    while (ll0 && ll1) {
        if (ll0->val == ll1->val) {
            temp->next = ll0;
            ll0 = ll0->next;
            ll1 = ll1->next;
            temp = temp->next;
            continue;
        }
        if (ll0->val < ll1->val) {
            temp->next = ll0;
            ll0 = ll0->next;

        } else {
            temp->next = ll1;
            ll1 = ll1->next;
        }
        temp = temp->next;
    }

    while (ll0) {
        temp->next = ll0;
        ll0 = ll0->next;
        temp = temp->next;
    }

    while (ll1) {
        temp->next = ll1;
        ll1 = ll1->next;
        temp = temp->next;
    }

    return root->next;
}