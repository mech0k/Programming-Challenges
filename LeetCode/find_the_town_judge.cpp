#include <bits/stdc++.h>
using namespace std;

int findJudge(int n, vector<vector<int>> & t){
    if(n == 1 && t.size() == 0) return 1;
    int arr[1000] {0};
    bool b_arr[1000] {0};
    for(auto i: t){
        arr[i[1]-1] += 1;
        b_arr[i[0]-1] = true;
    }
    for(auto i: t){
        if(arr[i[1]-1] == n-1 && b_arr[i[1]-1] == false){
            return i[1];
        }
    }
    return -1;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    vector<vector<int>> v = {{1,3},{1,4},{2,3},{2,4},{4,3}};
    // 3
    cout << findJudge(4,v) << endl;
    vector<vector<int>> v2 = {{1,2}};
    // 2
    cout << findJudge(2,v2) << endl;
    return 0;
}

