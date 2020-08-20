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
public:
    vector<TreeNode*> generate (int begin, int end){
        vector<TreeNode*> vec;
        if (begin > end) {
            vec.push_back(nullptr);
            return vec;
        }
        for (int i = begin; i <= end ;i++){
            // 生成所有左子树
            vector<TreeNode*> left_ans = generate(begin, i-1);                                                                                                                                                 
            // 生成所有右子树
            vector<TreeNode*> right_ans = generate(i+1, end);
            // 所有左右子树组合成新子树，并将结果返回
            for (TreeNode* left_node : left_ans){
                for (TreeNode* right_node : right_ans){
                   TreeNode *node = new TreeNode(i);
                   node->left = left_node;
                   node->right = right_node;
                   vec.push_back(node);
                }
            }
        }
        return vec;
    }   

    vector<TreeNode*> generateTrees(int n) {
        if (n) return generate(1, n);
        else return vector<TreeNode *>{};
    }   
};

