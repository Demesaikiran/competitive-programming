/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    vector<vector<int>> negative, positive;
    vector<int> zero;
    int neg_len = 0, pos_len = 0;
    
public:
    void traverse(TreeNode* node, int index)
    {
        if(node == NULL)
            return;
        
        if(index == 0)
        {
            auto it = upper_bound(zero.cbegin(), zero.cend(), node -> val);
            zero.insert(it, node -> val);
        }
        else if(index < 0)
        {
            int negSize = negative.size();
            int posIndex = -1 * index;
            
            if(posIndex <= negSize)
            {
                auto it = upper_bound(negative[posIndex - 1].cbegin(), negative[posIndex - 1].cend(), node -> val);
                negative[posIndex - 1].insert(it, node -> val);
            }
            else
            {
                vector<int> temp = {node -> val};
                negative.push_back(temp);
            }
        }
        
        else
        {
            int posSize = positive.size();
            
            if(index <= posSize)
            {
                auto it = upper_bound(positive[index - 1].cbegin(), positive[index - 1].cend(), node -> val);
                positive[index - 1].insert(it, node -> val);
            }
            else
            {
                vector<int> temp =  {node -> val};
                positive.push_back(temp);
            }
        }
        
        traverse(node -> left, index - 1);
        traverse(node -> right, index + 1);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        traverse(root, 0);
        vector<vector<int>> result;
        
        result.insert(result.end(), negative.rbegin(), negative.rend());
        
        result.insert(result.end(), zero);
        
        result.insert(result.end(), positive.begin(), positive.end());
        
        return result;
        
    }
};