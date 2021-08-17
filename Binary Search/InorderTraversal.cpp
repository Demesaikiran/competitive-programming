/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

/*               Iterative method             */

vector<int> solve(Tree* root) {
    stack<Tree* > nodes;
    Tree* node = root;

    vector<int> res;

    while( node != NULL or !nodes.empty())
    {
        while(node != NULL)
        {
            nodes.push(node);
            node = node -> left;
        }

        node = nodes.top();
        nodes.pop();

        res.push_back(node -> val);
        node = node -> right;
    }

    return res;
}


/*       Recursive Approach           */
void inorder(Tree *root, vector<int>&v){
    if(root){
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
}
vector<int> solve(Tree* root) {
    vector<int>v;
    inorder(root,v);
    return v;
}