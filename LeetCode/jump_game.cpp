#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums){
    int n = nums.size();
    if(n == 1) return 1;
    int index = n-1;
    for(int i = n-2; i >= 0; i--){
       if(i + nums[i] >= index){
           index = i;
       }
    }
    if(index == 0) return 1;
    return 0;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    // false
    vector<int> t0 = {3,2,1,0,4};
    cout << canJump(t0) << endl;
    // true
    vector<int> t1 = {2,3,1,1,4};
    cout << canJump(t1) << endl;

    return 0;
}

