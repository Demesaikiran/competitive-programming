/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {

    vector<int> result;
    if(root == NULL) return result;

    queue<Tree *> qu;

    qu.push(root);

    while(qu.empty() == false) {

        Tree *node = qu.front();
        result.push_back(node -> val);
        qu.pop();

        if(node -> left != NULL)
            qu.push(node->left);
        if(node -> right != NULL)
            qu.push(node->right);
    }

    return result;
    
}