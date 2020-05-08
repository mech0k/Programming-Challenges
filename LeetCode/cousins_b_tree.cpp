#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

pair<pair<int, bool>, int> test_d(TreeNode* n, int val, int p_v, int d){
    if(n == NULL) return {{1,0},1};
    if(n->val == val){
        return {{d,1},p_v};
    }
    auto l_d = test_d(n->left, val, n->val, d+1);
    auto r_d = test_d(n->right, val, n->val, d+1);

    if(l_d.first.second){
        return l_d;
    }
    return r_d;
}

bool isCousins(TreeNode* root, int x, int y){
    pair<pair<int, bool>, int> x_t =  test_d(root, x, 0, 0);
    pair<pair<int, bool>, int> y_t =  test_d(root, y, 0, 0);
    if(x_t.first.second && y_t.first.second && x_t.first.first == y_t.first.first && x_t.second != y_t.second){
        return true;
    }
    return false; 
}

int main(){
    std::ios_base::sync_with_stdio(false);

    return 0;
}

