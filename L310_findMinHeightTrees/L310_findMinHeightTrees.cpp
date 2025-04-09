//
// Created by garen_lee on 2025/4/9.
/**
  ******************************************************************************
  * @file           : L310_findMinHeightTrees.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/9
  ******************************************************************************
  */
//

#include "L310_findMinHeightTrees.h"
int L310_findMinHeightTrees::findLongestNode(int u, vector<int> & parent, vector<vector<int>>& adj) {
    int n = adj.size();
    queue<int> qu;
    vector<bool> visit(n);
    qu.emplace(u);
    visit[u] = true;
    int node = -1;

    while (!qu.empty()) {
        int curr = qu.front();
        qu.pop();
        node = curr;
        for (auto & v : adj[curr]) {
            if (!visit[v]) {
                visit[v] = true;
                parent[v] = curr;
                qu.emplace(v);
            }
        }
    }
    return node;
}

vector<int> L310_findMinHeightTrees::findMinHeightTrees(int n, vector<vector<int>>& edges) {
    if (n == 1) {
        return {0};
    }
    vector<vector<int>> adj(n);
    for (auto & edge : edges) {
        adj[edge[0]].emplace_back(edge[1]);
        adj[edge[1]].emplace_back(edge[0]);
    }

    vector<int> parent(n, -1);
    /* 找到与节点 0 最远的节点 x */
    int x = findLongestNode(0, parent, adj);
    /* 找到与节点 x 最远的节点 y */
    int y = findLongestNode(x, parent, adj);
    /* 求出节点 x 到节点 y 的路径 */
    vector<int> path;
    parent[x] = -1;
    while (y != -1) {
        path.emplace_back(y);
        y = parent[y];
    }
    int m = path.size();
    if (m % 2 == 0) {
        return {path[m / 2 - 1], path[m / 2]};
    } else {
        return {path[m / 2]};
    }
}

void L310_findMinHeightTrees::test() {
    int n = 4;
    vector<vector<int>> edges = {{1, 0}, {1, 2}, {1, 3}};
    vector<int> res = findMinHeightTrees(n, edges);
    print_vector(res);
    n = 6;
    edges = {{3, 0}, {3, 1}, {3, 2}, {3, 4}, {5, 4}};
    res = findMinHeightTrees(n, edges);
    print_vector(res);
}