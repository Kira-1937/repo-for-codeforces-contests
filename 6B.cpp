#include <iostream>
#include <vector>
#include <set>

using namespace std;
int dfs(const vector<vector<char>>& matrix, int n, int m, int i, int j, set<pair<int, int>>& visited) {
    // mark the current cell as visited
    visited.insert({i, j});

    // explore all adjacent cells
    int count = 0;
    for (int dx : {0, 0, 1, -1}) {
        for (int dy : {1, -1, 0, 0}) {
            int x = i + dx;
            int y = j + dy;

            // check if the adjacent cell is valid and not visited yet
            if (x >= 0 && x < n && y >= 0 && y < m && visited.count({x, y}) == 0) {
                // if the adjacent cell is part of a desk, increase the count and explore it
                if (matrix[x][y] != '.') {
                    count += dfs(matrix, n, m, x, y, visited);
                }
            }
        }
    }

    return count;
}
int count_deputies(const vector<vector<char>>& matrix, int n, int m, char c) {
    int deputies_count = 0;
    set<pair<int, int>> visited;

    // start at the cell containing the President's desk
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == c) {
                deputies_count += dfs(matrix, n, m, i, j, visited);
            }
        }
    }

    return deputies_count;
}


int main() {
    int n, m;
    char c;
    cin >> n >> m >> c;

    vector<vector<char>> matrix(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << count_deputies(matrix, n, m, c) << endl;

    return 0;
}
