//
// Created by garen_lee on 2025/4/16.
/**
  ******************************************************************************
  * @file           : L329_longestIncreasingPath.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/16
  ******************************************************************************
  */
//

#include "L329_longestIncreasingPath.h"

int L329_longestIncreasingPath::dfs(vector<vector<int>> &matrix, int row, int column, vector<vector<int>> &memo) {
    if (memo[row][column] != 0) {
        return memo[row][column];
    }
    ++memo[row][column];
    for (int i = 0; i < 4; ++i) {
        int newRow = row + dirs[i][0], newColumn = column + dirs[i][1];
        if (newRow >= 0 && newRow < rows && newColumn >= 0 && newColumn < columns && matrix[newRow][newColumn] > matrix[row][column]) {
            memo[row][column] = max(memo[row][column], dfs(matrix, newRow, newColumn, memo) + 1);
        }
    }
    return memo[row][column];
}

int L329_longestIncreasingPath::longestIncreasingPath(vector<vector<int>> &matrix) {
    if (matrix.size() == 0 || matrix[0].size() == 0) {
        return 0;
    }
    rows = matrix.size();
    columns = matrix[0].size();
    auto memo = vector< vector<int> > (rows, vector <int> (columns));
    int ans = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            ans = max(ans, dfs(matrix, i, j, memo));
        }
    }
    return ans;

}

void L329_longestIncreasingPath::test() {
    vector<vector<int>> matrix = {{9, 9, 4},
                                  {6, 6, 8},
                                  {2, 1, 1}};
    int res = longestIncreasingPath(matrix);
    cout << "res:" << res << endl;
    matrix = {{3, 4, 5},
              {3, 2, 6},
              {2, 2, 1}};
    res = longestIncreasingPath(matrix);
    cout << "res:" << res << endl;
}