#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr),
                 right(nullptr){}
    TreeNode(int x) : val(x), left(nullptr),
                      right(nullptr){}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right){}
};

vector<int> nums;
void inOrderTraversal(TreeNode * root){
   if(root == nullptr) return;
   inOrderTraversal(root->left);
   nums.push_back(root->val);
   inOrderTraversal(root->right);
}

int kthSmallest(TreeNode* root, int k){
    inOrderTraversal(root);
    return nums[k-1];
}

int main(){
    TreeNode* root = new TreeNode(3);
    TreeNode* l = new TreeNode(1);
    root->left = l;
    TreeNode* r = new TreeNode(4);
    root->right = r;
    TreeNode* lr = new TreeNode(2);
    l->right = lr;

    int k = 1;
    cout << kthSmallest(root, k) << endl;
    return 0;
}
