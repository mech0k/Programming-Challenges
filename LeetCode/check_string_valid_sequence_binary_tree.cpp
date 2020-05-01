#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool dfs(TreeNode* node, vector<int> & arr, unsigned int index){
    if(node == NULL || node->val != arr[index]) return 0;
    if(index == arr.size()-1){
        if(node->left == NULL && node->right == NULL) return 1;
        return 0;
    }
    return dfs(node->left, arr, index+1) || dfs(node->right, arr, index+1);        
}

bool isValidSequence(TreeNode* root, vector<int> &arr){
    return dfs(root, arr, 0);
}

int main(){
    std::ios_base::sync_with_stdio(false);
    TreeNode * t = new TreeNode(8);
    TreeNode * l = new TreeNode(3);
    t->left = l;
    TreeNode * ll = new TreeNode(2);
    l->left = ll;
    TreeNode * lr = new TreeNode(1);
    l->right = lr;
    TreeNode * lll = new TreeNode(5);
    ll->left = lll;
    TreeNode * llr = new TreeNode(4);
    ll->right = llr;
    vector<int> arr = {8};
    // 0
    cout << isValidSequence(t, arr) << endl;

    return 0;
}

