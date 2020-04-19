#include <bits/stdc++.h>

using namespace std;
int search(vector<int>& nums, int target){
    if(nums.size() == 0) return -1;
    int begin = 0;
    int length = nums.size();
    int end = length - 1;
    int index;
    while(begin < end){
        index = (begin + end) / 2;
        if(nums[index] > nums[end]){
            begin = index + 1;
        }else{
            end = index;
        }
    }
    index = begin;
    begin = 0;
    end = length - 1;
    if(target >= nums[index] && target <= nums[end]){
        begin = index;
    }else{
        end = index;
    }
    int mid;
    while(begin <= end){
        mid = (begin + end) / 2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] < target){
            begin  = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}



int main(){
    vector<int> v = {4,5,6,7,8,1,2,3};
    vector<int> v2 = {4,5,6,7,0,1,2};
    cout << search(v2, 0) << endl;

    std::ios_base::sync_with_stdio(false);

    return 0;
}

