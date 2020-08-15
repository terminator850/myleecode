#include <stdio.h>


using namespace std;


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int>  retv;
    stack<TreeNode*> nodest;
    vector<int> inorderTraversal(TreeNode* root){
        TreeNode *node = root;
        while(node||!nodest.empty()){
            if(NULL != node){
                // 当前节点node作为未遍历的中间节点入栈
                nodest.push(node); 
                // 获取左侧节点
                node = node->left;
            }else{
                // 没有未遍历的左侧节点 从栈中取出中间节点 遍历
               retv.push_back(nodest.top()->val);
               // 当前节点是否拥有右侧节点
               if(NULL != nodest.top()->right){
                   // 右侧子树根节点作为下一中间参与循环
                   node = nodest.top()->right;
               }
               //弹出遍历完的中间节点
               nodest.pop();
            }
        }
        return this->retv;
    }
};
