#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//// O(n^2)
//int maxSubArray(vector<int>& nums){
//    int max = INT_MIN;
//    int newM = 0;
//    for(size_t i = 0; i < nums.size(); i++){
//        for(size_t j = i; j < nums.size(); j++){
//            newM += nums[j]; 
//            if(newM > max){
//                max = newM;
//            }
//        }
//        newM = 0;
//    }
//    return max;
//}

// O(n)
int maxSubArray(vector<int>& nums){
    int max = INT_MIN;
    int acc = 0;
    for(size_t i = 0; i < nums.size(); i++){
        acc += nums[i];
        if(acc > max){
            max = acc;
        }
        if(acc < 0){
            acc = 0;
        }
    }
    return max;
}

int main(){
    vector<int> temp = {-2,1,-3,4,-1,2,1,-5,4};
    // 6
    std::cout << maxSubArray(temp) << std::endl;

    return 0;
}
