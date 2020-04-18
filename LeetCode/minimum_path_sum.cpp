#include <bits/stdc++.h>
using namespace std;

//int min_path(vector<vector<int>> &grid, vector<vector<int>> &cost, int i, int j, int goal_i, int goal_j){
//    int cur_min = grid[i][j];
//    if(i == goal_i && j == goal_j) return grid[i][j];
//    if(cost[i][j] != -1) return cost[i][j];
//    if(i+1 == goal_i+1){
//        cur_min += min_path(grid,cost,i,j+1,goal_i, goal_j);
//    }else if(j+1 == goal_j+1){
//        cur_min += min_path(grid, cost, i+1, j, goal_i, goal_j);
//    }else{
//        cur_min += min(min_path(grid, cost, i+1, j, goal_i, goal_j), min_path(grid,cost,i,j+1,goal_i, goal_j));
//    }
//    cost[i][j] = cur_min;
//    return cur_min;
//}
//int minPathSum(vector<vector<int>> &grid){
//    int height = grid.size();
//    if(height == 0) return 0;
//    int width = grid[0].size();
//    vector<vector<int>> cost;
//    cost.resize(height, vector<int>(width, -1));
//    return min_path(grid,cost, 0, 0, height-1, width-1);
//}

int minPathSum(vector<vector<int>> &grid){
    int height = grid.size();
    if(height == 0) return 0;
    int width = grid[0].size();
    int cost[height][width];
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(i == 0 && j == 0){
                cost[i][j] = grid[i][j];
                continue;
            }
            if(i == 0){
                cost[i][j] = grid[i][j]+cost[i][j-1];
                continue;
            }
            if(j == 0){
                cost[i][j] = grid[i][j]+cost[i-1][j];
                continue;
            }
            cost[i][j] = grid[i][j]+min(cost[i-1][j],cost[i][j-1]);
        }
    }
    return cost[height-1][width-1];
}


int main(){
    std::ios_base::sync_with_stdio(false);
    // 7
    vector<vector<int>> grid = {{1,3,1},{1,5,1},{4,2,1}};
    cout << minPathSum(grid) << endl;
    return 0;
}

