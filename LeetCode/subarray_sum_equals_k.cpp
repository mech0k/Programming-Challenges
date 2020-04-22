#include <bits/stdc++.h>
using namespace std;

// O(N)
int subarraySum(vector<int> &nums, int k){
    int n = nums.size();
    unordered_map<int, int> m;
    int ans = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
       sum += nums[i]; 
       if(sum == k) ans++;
       if(m.find(sum-k) != m.end()){
            ans += m[sum-k];
       }
       m[sum]++;
    }
    return ans;
}

// O(N^2)
//int subarraySum(vector<int>& nums, int k){
//    int n = nums.size();
//    if(n == 0) return 0;
//    
//    int sums[n];
//    int sum = 0;
//    for(int i = 0; i < n; i++){
//        sum += nums[i];
//        sums[i] = sum;
//    }
//    int ans = 0;
//    int window_size = 1;
//    while(window_size != n+1){
//        for(int i = -1; i < n-window_size; i++){
//            if(i == -1){
//                if(sums[i+window_size] == k){
//                    ans++;
//                }
//            }else if(sums[i+window_size] - sums[i] == k){
//                ans++;
//            }
//        }
//        window_size++;
//    }
//    return ans;
//}

int main(){
    std::ios_base::sync_with_stdio(false);
    vector<int> input = {1,1,1,2,1};

    cout << subarraySum(input, 2) << endl;
    return 0;
}

