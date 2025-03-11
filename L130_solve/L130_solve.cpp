//
// Created by garen_lee on 2025/3/11.
/**
  ******************************************************************************
  * @file           : L130_solve.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/11
  ******************************************************************************
  */
//

#include "L130_solve.h"

void L130_solve::dfs(vector<vector<char>> &board, int i, int j) {
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'O') {
        return;
    }

    board[i][j] = '#';

    dfs(board, i + 1, j);
    dfs(board, i - 1, j);
    dfs(board, i, j + 1);
    dfs(board, i, j - 1);
}

void L130_solve::solve(vector<vector<char>> &board) {
    if (board.empty()) return;

    int m = board.size();
    int n = board[0].size();

    // 遍历第一行和最后一行
    for (int i = 0; i < m; ++i) {
        dfs(board, i, 0);
        dfs(board, i, n - 1);
    }

    // 遍历第一列和最后一列
    for (int j = 0; j < n; ++j) {
        dfs(board, 0, j);
        dfs(board, m - 1, j);
    }

    // 遍历整个矩阵，将剩余的'O'修改为'X'，将'#'修改回'O'
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j] == 'O') {
                board[i][j] = 'X';
            } else if (board[i][j] == '#') {
                board[i][j] = 'O';
            }
        }
    }
}

void L130_solve::test() {
    vector<vector<char>> board = {{'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
    solve(board);
    print_vector_vector(board);
    board = {{'X'}};
    solve(board);
    print_vector_vector(board);
}