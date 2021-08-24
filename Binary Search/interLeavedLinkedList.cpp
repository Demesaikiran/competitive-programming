/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* l0, LLNode* l1) {
    if (!l0) return l1;
    if (!l1) return l0;

    LLNode* root = new LLNode(); root = l0;
    LLNode* temp = new LLNode(); temp = l0;
    l0 = l0 -> next;
    bool flag = true;

    while(l0 && l1)
    {   
        if(flag)
        {
            temp -> next = l1;
            l1 = l1 -> next;
        }
        else{
            temp -> next = l0;
            l0 = l0 -> next;
        }
        temp = temp -> next;
        flag = !flag;
    }
    temp -> next = l0 ? l0 : l1;

    return root;
    
}