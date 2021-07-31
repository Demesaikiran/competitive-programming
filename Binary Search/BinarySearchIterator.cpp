/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
class BSTIterator {
    public:
    BSTIterator(Tree* root) {
        load(s, root);

    }

    int next() {
        int n = s.top();
        s.pop();
        return n;
    }

    bool hasnext() {

        return !s.empty();
        
    }

    private:
    stack<int> s;

    void load(stack<int>& s, Tree* root) {
        if(!root)return;
        load(s, root->right);
        s.push(root->value);
        load(s, root-> left);
    }
};