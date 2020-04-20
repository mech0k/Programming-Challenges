#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

void pre(TreeNode* root, int val){
    if(val > root->val){
        if(root->right == NULL){
            root->right = new TreeNode(val);
            return;
        }
        pre(root->right, val);
    }else if(val < root->val){
        if(root->left == NULL){
            root->left = new TreeNode(val);
            return;
        }
        pre(root->left, val);
    }
}

TreeNode* bstFromPreorder(vector<int> & preorder){
    TreeNode* root = new TreeNode(preorder[0]);
    for(size_t i = 1; i < preorder.size(); i++){
        pre(root, preorder[i]);
    }
    return root;
}

void print_tree(TreeNode* node){
    if(node != NULL){
        cout << node->val << " ";
        print_tree(node->left);
        print_tree(node->right);
    }
}

int main(){
    std::ios_base::sync_with_stdio(false);

    vector<int> preorder = {8,5,1,7,10,12};
    print_tree(bstFromPreorder(preorder));

    return 0;
}

