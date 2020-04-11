#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int height(TreeNode* node){
    if(node == NULL){
        return 0;
    }
    int l_h = height(node->left);
    int r_h = height(node->right);
    if(l_h > r_h)
        return l_h + 1;
    return r_h + 1;
}

int diameterOfBinaryTree(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    int l_h = height(root->left);
    int r_h = height(root->right);
    int l_d = diameterOfBinaryTree(root->left);
    int r_d = diameterOfBinaryTree(root->right);
    // add + 1 on the left side of the max if you need nodes
    // without + 1 it's the path
    return max(l_h + r_h, max(l_d, r_d));
}

int main(){
    std::ios_base::sync_with_stdio(false);
    TreeNode a(1);
    TreeNode b(2); 
    TreeNode c(3);
    TreeNode d(4);
    TreeNode e(5);
    TreeNode f(1);
    TreeNode g(2); 
    TreeNode h(3);
    TreeNode i(4);
    TreeNode j(5);
    TreeNode k(1);
    TreeNode l(2); 
    TreeNode m(3);
    TreeNode n(4);
    TreeNode o(5);
    a.right = &b;
    b.right = &c;
    a.left = &d;
    d.left = &e;
    e.left = &f;
    e.right = &g;
    g.left = &h;
    h.left = &i;
    h.right = &j;
    d.right = &k;
    k.right = &l;
    l.left = &m;
    l.right = &n;
    n.right = &o;
    // 9 nodes, path 8
    cout << diameterOfBinaryTree(&a) << endl;
    return 0;
}

