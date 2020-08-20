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
    TreeNode * copytree(TreeNode *root){
        if(root == NULL){
            rerturn NULL;
        }
        // 递归拷贝
        TreeNode *node = new TreeNode(root->val, copytree(root->left), copytree(root->right));
        return node;
    }
    vector<TreeNode*> insert_node(TreeNode *root, int num){
        vector<TreeNode*> toinsert;
        for (NULL != temproot->right){
            TreeNode *node = copytree(root);
            if (node->right->val < num) {
                node->right = new TreeNode(num, node->right, null);
            } else {

                node->right = new TreeNode(num, NULL->node->right);
            }
            
            toinsert.push_back(node)
        }
        return toinsert;
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> tempv;
        // 循环插入1-n
        for(int i = 1; i <= n; i++){
            // 将新节点当作子节点
            for(int j = 0; j < tempv.size();j++){
                insert_node(tempv[j], i, tempv)
            }
            // 将新节点当作根节点
            TreeNode *node = new TreeNode(1);
            for(iter : tempv){
            }
        }
        return tempv;
    }
};
