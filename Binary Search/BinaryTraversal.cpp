//https://binarysearch.com/problems/Search-in-a-Virtually-Complete-Binary-Tree
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root, int target) {
    bool leftval, rightval;

    if(root != NULL) {
        if(root -> val == target) return true;
        leftval = solve(root->left, target);

        rightval =solve(root->right, target);

        return (leftval || rightval);
    }
    return false;
    
    
    
}