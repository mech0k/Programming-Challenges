#include <bits/stdc++.h>
using namespace std;

int maxSubarraySumCircular(vector<int> & A){
    int s_0 = 0;
    int s_1 = 0;
    int s_2 = 0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i : A){
        s_0 += i;
        mini=min(s_0, mini);
        if(s_0 > 0) s_0 = 0;

        s_1 += i;
        maxi=max(maxi, s_1);
        if(s_1 < 0) s_1 = 0;

        s_2 += i;
    }
    if(s_2 == mini) return maxi;
    return max(maxi, s_2 - mini);
}

int main(){
    std::ios_base::sync_with_stdio(false);
    vector<int> t0 = {1,-2,3,-2}; // 3
    cout << maxSubarraySumCircular(t0) << endl;
    vector<int> t1 = {5,-3,5}; // 10
    cout << maxSubarraySumCircular(t1) << endl;
    vector<int> t2 = {3,-1,2,-1}; // 4
    cout << maxSubarraySumCircular(t2) << endl;
    vector<int> t3 = {3,-2,2,-3}; // 3
    cout << maxSubarraySumCircular(t3) << endl;
    vector<int> t4 = {-2,-3,-1}; // -1
    cout << maxSubarraySumCircular(t4) << endl;

    return 0;
}

