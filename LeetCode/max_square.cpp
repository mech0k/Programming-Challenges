#include <bits/stdc++.h>
using namespace std;

int maximalSquare(vector<vector<char>>& matrix){
    int m = 0;
    int h = matrix.size();
    if(h == 0) return 0;
    int w = matrix[0].size();
    int dp[h+1][w+1];

    // need this for leetcode
    //for(int i = 0; i < h+1; i++){
    //    for(int j = 0; j < w+1; j++){
    //        dp[i][j] = 0;
    //    }
    //}

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(matrix[i-1][j-1] == '1'){
                dp[i][j] = min( dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j])) + 1;
                m = max(dp[i][j], m);
            }
        }
    }
    return m*m;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    vector<vector<char>> input ={
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };
    // 4
    cout << maximalSquare(input) << endl;

    return 0;
}

