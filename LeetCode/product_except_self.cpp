#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums){
    vector<int> ans;
    int n = nums.size();
    ans.resize(n);
    int res = 1;
    for(int i = 0; i < n; i++){
        ans[i] = res;
        res *= nums[i];
    }
    res = 1;
    for(int i = n-1; i >= 0; i --){
        ans[i] *= res;
        res *= nums[i];
    }
    return ans;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    return 0;
}

