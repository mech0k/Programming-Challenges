#include <bits/stdc++.h>
using namespace std;

// optimal but slow, good space complexity
//int findMaxLength(vector<int> &nums){
//    unordered_map<int, int> counts;
//    counts[0] = -1;
//    int m = 0;
//    int count = 0;
//    for(int i = 0; i < (int)nums.size(); i ++){
//        if(nums[i] == 0){
//            count -=1;
//        }else{
//            count +=1;
//        }
//        if(counts.find(count) == counts.end())
//            counts[count] = i;
//        if(m < i-counts[count]) m = i-counts[count]; 
//    }
//    return m;
//}

// improves time due to constant lookup
// space complexity suffers
//int arr[100001];
//int findMaxLength(vector<int> &nums){
//    int m = 0;
//    for(int i = 0; i < 100001; i++){
//        arr[i] = 49999;
//    }
//    int count = 50000;
//    for(int i = 0; i < (int)nums.size(); i++){
//        if(nums[i] == 0){
//            count -=1;
//        }else{
//            count +=1;
//        } 
//        if(count != 50000 && arr[count] == 49999)
//            arr[count] = i+50000;
//        if(m < i+50000-arr[count]) m = i+50000-arr[count];
//    }
//    return m;
//}

// time O(n), space O(n)
int findMaxLength(vector<int> &nums){
    int m = 0;
    int n = nums.size();
    int arr[2*n+1];
    for(int i = 0; i < 2*n+1; i++){
        arr[i] = -50001;
    }
    arr[n] = n-1;
    int count = n;
    for(int i = 0; i < n; i++){
        nums[i] == 0 ? count -= 1 : count += 1;
        if(count != n && arr[count] == -50001)
            arr[count] = i+n;
        if(m < i + n - arr[count]) m = i + n - arr[count];
    }
    return m;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    // 4
    vector<int> test0 = {0,1,1,1,0,1,0,1,1};
    // 18
    vector<int> test1 = {1,0,0,1,0,1,0,1,1,0,0,1,0,1,0,0,1,1};
    // 2
    vector<int> test2 = {1,1,1,1,1,1,0,1};
    // 10
    vector<int> test3 = {1,1,1,0,0,0,0,1,1,0,0};
    // 2
    vector<int> test4 = {0,0,0,1};

    cout << findMaxLength(test0) << endl;
    cout << findMaxLength(test1) << endl;
    cout << findMaxLength(test2) << endl;
    cout << findMaxLength(test3) << endl;
    cout << findMaxLength(test4) << endl;
    return 0;
}

