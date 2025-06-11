//
// Created by garen_lee on 2025/6/11.
/**
  ******************************************************************************
  * @file           : L542_updateMatrix.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/11
  ******************************************************************************
  */
//

#include "L542_updateMatrix.h"

vector<vector<int>> L542_updateMatrix::updateMatrix(vector<vector<int>> &mat) {
    vector<vector<int>> dirs = {{-1, 0},
                                {1,  0},
                                {0,  -1},
                                {0,  1}};
    int m = mat.size(), n = mat[0].size();
    vector<vector<int>> dis(m, vector<int>(n, INT_MAX));
    queue<pair<int, int>> q;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 0) {
                dis[i][j] = 0;
                q.push({i, j});
            }
        }
    }
    while (!q.empty()) {
        auto t = q.front();
        q.pop();
        for (auto dir: dirs) {
            int x = t.first + dir[0], y = t.second + dir[1];
            if (x < 0 || x >= m || y < 0 || y >= n) continue;
            if (dis[x][y] > dis[t.first][t.second] + 1) {
                dis[x][y] = dis[t.first][t.second] + 1;
                q.push({x, y});
            }
        }
    }
    return dis;
}

void L542_updateMatrix::test() {
    vector<vector<int>> mat = {{0, 0, 0},
                               {0, 1, 0},
                               {0, 0, 0}};
    vector<vector<int>> res = updateMatrix(mat);
    print_vector_vector(res);
    mat = {{0, 0, 0},
           {0, 1, 0},
           {1, 1, 1}};
    res = updateMatrix(mat);
    print_vector_vector(res);
}