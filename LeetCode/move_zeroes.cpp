#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int> & nums){
    int n = nums.size();
    int last_index = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] != 0){
            nums[last_index] = nums[i];
            if(last_index != i){
                nums[i] = 0;
            }
            last_index += 1;
        }
    }
}

int main(){
    vector<int> temp = {0,1,0,3,12};
    // {1,3,12,0,0}
    moveZeroes(temp);

    return 0;
}

