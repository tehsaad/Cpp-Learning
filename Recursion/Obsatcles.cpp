#include <iostream>
#include <vector>
using namespace std;

int waysWithObstacles(vector<vector<int>>& grid, int m, int n, int i = 0, int j = 0) {
    if(i>=m || j>=n)return 0;
    if(grid[i][j]==1)return 0;
    if(i==m-1 && j==n-1)return 1;
    return waysWithObstacles(grid, m,n,i+1,j) + waysWithObstacles(grid,m,n,i,j+1);
}

int main() {
    // 0 = Open, 1 = Obstacle
    vector<vector<int>> grid = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };

    int m = grid.size();
    int n = grid[0].size();

    cout << "Valid paths: " << waysWithObstacles(grid, m, n) << endl;
    return 0;
}
