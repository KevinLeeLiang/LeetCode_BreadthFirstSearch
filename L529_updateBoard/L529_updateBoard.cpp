//
// Created by garen_lee on 2025/6/4.
/**
  ******************************************************************************
  * @file           : L529_updateBoard.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/4
  ******************************************************************************
  */
//

#include "L529_updateBoard.h"

void L529_updateBoard::bfs(vector<vector<char>> &board, int sx, int sy) {
    queue<pair<int, int>> Q;
    vector<vector<int>> vis(board.size(), vector<int>(board[0].size(), 0));
    Q.push({sx, sy});
    vis[sx][sy] = true;
    while (!Q.empty()) {
        auto pos = Q.front();
        Q.pop();
        int cnt = 0, x = pos.first, y = pos.second;
        for (int i = 0; i < 8; ++i) {
            int tx = x + dir_x[i];
            int ty = y + dir_y[i];
            if (tx < 0 || tx >= board.size() || ty < 0 || ty >= board[0].size()) {
                continue;
            }
            // 不用判断 M，因为如果有 M 的话游戏已经结束了
            cnt += board[tx][ty] == 'M';
        }
        if (cnt > 0) {
            // 规则 3
            board[x][y] = cnt + '0';
        } else {
            // 规则 2
            board[x][y] = 'B';
            for (int i = 0; i < 8; ++i) {
                int tx = x + dir_x[i];
                int ty = y + dir_y[i];
                // 这里不需要在存在 B 的时候继续扩展，因为 B 之前被点击的时候已经被扩展过了
                if (tx < 0 || tx >= board.size() || ty < 0 || ty >= board[0].size() || board[tx][ty] != 'E' || vis[tx][ty]) {
                    continue;
                }
                Q.push(make_pair(tx, ty));
                vis[tx][ty] = true;
            }
        }
    }
}

vector<vector<char>> L529_updateBoard::updateBoard(vector<vector<char>> &board, vector<int> &click) {
    int x = click[0], y = click[1];
    if (board[x][y] == 'M') {
        // 规则 1
        board[x][y] = 'X';
    } else {
        bfs(board, x, y);
    }
    return board;
}

void L529_updateBoard::test() {
    vector<vector<char>> board = {{'E', 'E', 'E', 'E', 'E'},
                                  {'E', 'E', 'M', 'E', 'E'},
                                  {'E', 'E', 'E', 'E', 'E'},
                                  {'E', 'E', 'E', 'E', 'E'}};
    vector<int> click = {3, 0};
    vector<vector<char>> res = updateBoard(board, click);
    print_vector_vector(res);
    board = {{'B', '1', 'E', '1', 'B'},
            {'B', '1', 'M', '1', 'B'},
            {'B', '1', '1', '1', 'B'},
            {'B', 'B', 'B', 'B', 'B'}};
    click = {1, 2};
    res = updateBoard(board, click);
    print_vector_vector(res);
}