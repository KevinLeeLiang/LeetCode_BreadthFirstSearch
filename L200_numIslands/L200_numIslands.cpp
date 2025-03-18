//
// Created by garen_lee on 2025/3/18.
/**
  ******************************************************************************
  * @file           : L200_numIslands.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/18
  ******************************************************************************
  */
//

#include "L200_numIslands.h"

int L200_numIslands::numIslands(vector<vector<char>>& grid) {
    int nr = grid.size();
    if (nr == 0) {
        return 0;
    }
    int nc = grid[0].size();
    int num_islands = 0;
    for (int r = 0; r < nr; ++r) {
        for (int c = 0; c < nc; ++c) {
            if (grid[r][c] == '1') {
                ++num_islands;
                grid[r][c] = '0';
                queue<pair<int, int>> neighbors;
                neighbors.push({r, c});
                while (!neighbors.empty()) {
                    auto rc = neighbors.front();
                    neighbors.pop();
                    int row = rc.first, col = rc.second;
                    if (row - 1 >= 0 && grid[row-1][col] == '1') {
                        neighbors.push({row-1, col});
                        grid[row-1][col] = '0';
                    }
                    if (row + 1 < nr && grid[row+1][col] == '1') {
                        neighbors.push({row+1, col});
                        grid[row+1][col] = '0';
                    }
                    if (col - 1 >= 0 && grid[row][col-1] == '1') {
                        neighbors.push({row, col-1});
                        grid[row][col-1] = '0';
                    }
                    if (col + 1 < nc && grid[row][col+1] == '1') {
                        neighbors.push({row, col+1});
                        grid[row][col+1] = '0';
                    }
                }
            }
        }
    }
    return num_islands;
}

void L200_numIslands::test() {
    vector<vector<char>> grid = {
            {'1', '1', '1', '1', '0'},
            {'1', '1', '0', '1', '0'},
            {'1', '1', '0', '0', '0'},
            {'0', '0', '0', '0', '0'}
    };
    cout << numIslands(grid) << endl;
    grid = {
            {'1', '1', '0', '0', '0'},
            {'1', '1', '0', '0', '0'},
            {'0', '0', '1', '0', '0'},
            {'0', '0', '0', '1', '1'}
    };
    cout << numIslands(grid) << endl;
}