#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> & nums){
    int p_0 = 0;
    int p_1 = nums.size()-1;
    while(p_0 != p_1){
        int i = p_0 + (p_1 - p_0) / 2;
        if(i % 2 == 0){
            if(nums[i] == nums[i + 1]){
                p_0 = i + 2; 
            }else{
                p_1 = i;
            }
        }else{
            if(nums[i - 1] == nums[i]){
                p_0 = i + 1;
            }else{
                p_1 = i - 1;
            }
        }
    }
    return nums[p_0];
}

int main(){
    std::ios_base::sync_with_stdio(false);
    vector<int> t = {1,1,2,3,3,4,4,8,8};
    // 2
    cout << singleNonDuplicate(t) << endl;

    return 0;
}

