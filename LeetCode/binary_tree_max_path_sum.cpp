#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// insane code
int sub_path(int &r, TreeNode* node){
    if(node == NULL) return 0;
    int l_h = sub_path(r, node->left);
    int r_h = sub_path(r, node->right);

    int m_v = node->val+max(l_h, r_h);

    r = max(l_h + r_h + node->val, r);
    return m_v > 0 ? m_v : 0;
}

int maxPathSum(TreeNode* root){
    int ret = INT_MIN;
    sub_path(ret, root);
    return ret;
}

//int sub_path(TreeNode* node){
//    if(node == NULL){
//        return 0;
//    }
//    int l_h = sub_path(node->left);
//    int r_h = sub_path(node->right);
//    if(l_h < 0 && r_h < 0) return node->val;
//    if(l_h > r_h)
//        return l_h + node->val;
//    return r_h + node->val;
//}
//
//int maxPathSum(TreeNode* root){
//    if(root == NULL) return INT_MIN;
//    int l_m = sub_path(root->left);
//    int r_m = sub_path(root->right);
//    int m_l_m = maxPathSum(root->left);
//    int m_r_m = maxPathSum(root->right);
//    
//    return max(root->val + r_m, max(root->val + l_m, max(root->val, max(l_m + root->val + r_m, max(m_l_m, m_r_m)))));
//}

int main(){
    std::ios_base::sync_with_stdio(false);

    return 0;
}

