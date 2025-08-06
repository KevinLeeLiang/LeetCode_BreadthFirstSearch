//
// Created by garen_lee on 2025/8/6.
/**
  ******************************************************************************
  * @file           : L675_cutOffTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/6
  ******************************************************************************
  */
//

#include "L675_cutOffTree.h"

int L675_cutOffTree::bfs(vector<vector<int>> &forest, int sx, int sy, int tx, int ty) {
    if (sx == tx && sy == ty) {
        return 0;
    }
    int row = forest.size();
    int col = forest[0].size();
    int step = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(sx, sy));
    vector<vector<bool>>visited(row, vector<bool>(col, false));
    visited[sx][sy] = true;
    while (!q.empty()) {
        step++;
        int size = q.size();
        for (int i = 0; i < size; i++) {
            auto [cx, cy] = q.front();
            q.pop();
            for (int j = 0; j < 4; ++j) {
                int nx = cx + dir[j][0];
                int ny = cy + dir[j][1];
                if (nx >= 0 && nx < row && ny >= 0 && ny < col && forest[nx][ny] > 0) {
                    if (!visited[nx][ny] && forest[nx][ny] > 0) {
                        if (nx == tx && ny == ty) {
                            return step;
                        }
                        q.emplace(nx, ny);
                        visited[nx][ny] = true;
                    }
                }
            }
        }
    }
    return -1;
}

int L675_cutOffTree::cutOffTree(vector<vector<int>> &forest) {
    vector<pair<int, int>> trees;
    int row = forest.size();
    int col = forest[0].size();
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (forest[i][j] > 1) {
                trees.push_back(make_pair(i, j));
            }
        }
    }
    sort(trees.begin(), trees.end(), [&](const pair<int, int> & a, const pair<int, int> & b) {
        return forest[a.first][a.second] < forest[b.first][b.second];
    });
    int cx = 0, cy = 0;
    int res = 0;
    for (int i = 0; i < trees.size(); i++) {
        int steps = bfs(forest, cx, cy, trees[i].first, trees[i].second);
        if (steps == -1) {
            res = -1;
            break;
        }
        res += steps;
        cx = trees[i].first;
        cy = trees[i].second;
    }
    return res;
}

void L675_cutOffTree::test() {
    vector<vector<int>> forest = {{1, 2, 3},
                                 {0, 0, 4},
                                 {7, 6, 5}};
    cout << cutOffTree(forest) << endl;
    forest = {{1, 2, 3},
              {0, 0, 0},
              {7, 6, 5}};
    cout << cutOffTree(forest) << endl;
    forest = {{2, 3, 4},
             {0, 0, 5},
             {8, 7, 6}};
    cout << cutOffTree(forest) << endl;
}