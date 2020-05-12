#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& i, int r, int c, int c_0, int c_1) {
    if(r < 0 || r >= (int)i.size() || c < 0 || c >= (int)i[0].size() || i[r][c] != c_0 || i[r][c] == c_1)
        return;
    i[r][c] = c_1;
    dfs(i, r+1, c, c_0, c_1);
    dfs(i, r-1, c, c_0, c_1);
    dfs(i, r, c+1, c_0, c_1);
    dfs(i, r, c-1, c_0, c_1);
}
vector<vector<int>> floodFill(vector<vector<int>>& i, int r, int c, int c_1) {
    dfs(i, r, c, i[r][c], c_1);
    return i;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    return 0;
}

