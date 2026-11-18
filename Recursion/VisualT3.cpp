#include <iostream>
#include <vector>
#include <thread>
#include <chrono>

using namespace std;

int pathCount = 0;

void printGrid(const vector<vector<int>>& grid, int m, int n) {
    cout << "\n--- Path #" << ++pathCount << " ---\n";
    for (int r = 0; r < m; ++r) {
        for (int c = 0; c < n; ++c) {
            if (r == m - 1 && c == n - 1) cout << "E ";      // Target
            else if (grid[r][c] == 1) cout << "* ";          // Current path
            else cout << ". ";                               // Unvisited
        }
        cout << '\n';
    }
    this_thread::sleep_for(chrono::milliseconds(400));
}

int ways(int m, int n, int i, int j, vector<vector<int>>& grid) {
    if (i >= m || j >= n) {
        return 0;
    }

    // Mark current cell as part of the path
    grid[i][j] = 1;

    if (i == m - 1 && j == n - 1) {
        printGrid(grid, m, n);
        grid[i][j] = 0; // Backtrack
        return 1;
    }

    int total = ways(m, n, i + 1, j, grid) + ways(m, n, i, j + 1, grid);

    // Unmark cell when backtracking
    grid[i][j] = 0;
    return total;
}

int main() {
    cout << "Enter the Grid Size, (m x n): ";
    int m, n;
    cin >> m >> n;

    vector<vector<int>> arr(m, vector<int>(n, 0));

    int totalWays = ways(m, n, 0, 0, arr);
    cout << "\nNumber of ways to reach from (0,0) to (" 
         << m - 1 << "," << n - 1 << "): " << totalWays << endl;

    return 0;
}
