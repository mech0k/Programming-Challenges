#include <bits/stdc++.h>
using namespace std;


void recursive_flood(vector<vector<char>>&grid, int i, int j){
    int s = grid.size();
    int s_j = grid[0].size();
    if(grid[i][j] == '1'){
        grid[i][j] = '0';
        if(i > 0){
            recursive_flood(grid,i-1,j);
        }
        if(i < s-1){
            recursive_flood(grid,i+1,j);
        }
        if(j > 0){
            recursive_flood(grid,i,j-1);
        }
        if(j < s_j-1){
            recursive_flood(grid,i,j+1);
        }
    }
}

int numIslands(vector<vector<char>>& grid){
    int length = grid.size();
    if(length == 0) return 0;
    int width = grid[0].size();
    int c = 0;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < width; j++){
            if(grid[i][j] == '1'){
                c++; 
                recursive_flood(grid, i, j);
            }
        } 
    }
    return c;
}


int main(){
    std::ios_base::sync_with_stdio(false);

    //vector<vector<char>> grid0 = {{'1','1','0','0','0'},{'1','1','0','0','0'},{'0','0','1','0','0'},{'0','0','0','1','1'}};
    vector<vector<char>> grid1 = {{'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0'}};
    //cout << numIslands(grid0) << endl;
    cout << numIslands(grid1) << endl;
    return 0;
}

