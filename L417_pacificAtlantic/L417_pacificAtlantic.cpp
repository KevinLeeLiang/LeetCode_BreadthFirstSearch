//
// Created by garen_lee on 2025/5/7.
/**
  ******************************************************************************
  * @file           : L417_pacificAtlantic.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/7
  ******************************************************************************
  */
//

#include "L417_pacificAtlantic.h"
void L417_pacificAtlantic::dfs(std::vector<std::vector<int>>& matrix, std::vector<std::vector<bool>>& visited, int row, int col, int prevHeight) {
    if (row < 0 || row >= matrix.size() || col < 0 || col >= matrix[0].size() || visited[row][col] || matrix[row][col] < prevHeight) {
        return;
    }

    visited[row][col] = true;

    dfs(matrix, visited, row + 1, col, matrix[row][col]);
    dfs(matrix, visited, row - 1, col, matrix[row][col]);
    dfs(matrix, visited, row, col + 1, matrix[row][col]);
    dfs(matrix, visited, row, col - 1, matrix[row][col]);
}
vector<vector<int>> L417_pacificAtlantic::pacificAtlantic(vector<vector<int>>& heights) {
    std::vector<std::vector<int>> result;
    auto matrix  = heights;
    if (matrix.empty()) {
        return result;
    }

    int rows = matrix.size();
    int cols = matrix[0].size();

    std::vector<std::vector<bool>> pacific(rows, std::vector<bool>(cols, false));
    std::vector<std::vector<bool>> atlantic(rows, std::vector<bool>(cols, false));

    for (int i = 0; i < rows; ++i) {
        dfs(matrix, pacific, i, 0, INT_MIN);
        dfs(matrix, atlantic, i, cols - 1, INT_MIN);
    }

    for (int j = 0; j < cols; ++j) {
        dfs(matrix, pacific, 0, j, INT_MIN);
        dfs(matrix, atlantic, rows - 1, j, INT_MIN);
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (pacific[i][j] && atlantic[i][j]) {
                result.push_back({i, j});
            }
        }
    }

    return result;
}

void L417_pacificAtlantic::test() {
    vector<vector<int>> heights = {{1, 2, 2, 3, 5}, {3, 2, 3, 4, 4}, {2, 4, 5, 3, 1}, {6, 7, 1, 4, 5}, {5, 1, 1, 2, 4}};
    vector<vector<int>> res = pacificAtlantic(heights);
    print_vector_vector(res);
    heights = {{2, 1}, {1, 2}};
    res = pacificAtlantic(heights);
    print_vector_vector(res);
}