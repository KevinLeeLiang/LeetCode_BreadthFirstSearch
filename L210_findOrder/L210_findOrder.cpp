//
// Created by garen_lee on 2025/3/25.
/**
  ******************************************************************************
  * @file           : L210_findOrder.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/25
  ******************************************************************************
  */
//

#include "L210_findOrder.h"

void L210_findOrder::dfs(int u) {
    // 将节点标记为「搜索中」
    visited[u] = 1;
    // 搜索其相邻节点
    // 只要发现有环，立刻停止搜索
    for (int v: edges[u]) {
        // 如果「未搜索」那么搜索相邻节点
        if (visited[v] == 0) {
            dfs(v);
            if (!valid) {
                return;
            }
        }
            // 如果「搜索中」说明找到了环
        else if (visited[v] == 1) {
            valid = false;
            return;
        }
    }
    // 将节点标记为「已完成」
    visited[u] = 2;
    // 将节点入栈
    result.push_back(u);
}

vector<int> L210_findOrder::findOrder(int numCourses, vector<vector<int>> &prerequisites) {
    edges.resize(numCourses);
    visited.resize(numCourses);
    for (const auto& info: prerequisites) {
        edges[info[1]].push_back(info[0]);
    }
    // 每次挑选一个「未搜索」的节点，开始进行深度优先搜索
    for (int i = 0; i < numCourses && valid; ++i) {
        if (!visited[i]) {
            dfs(i);
        }
    }
    if (!valid) {
        return {};
    }
    // 如果没有环，那么就有拓扑排序
    // 注意下标 0 为栈底，因此需要将数组反序输出
    reverse(result.begin(), result.end());
    return result;
}

void L210_findOrder::test() {
    int numCourses = 2;
    vector<vector<int>> prerequisites = {{1, 0}};
    vector<int> res = findOrder(numCourses, prerequisites);
    print_vector(res);
    numCourses = 4;
    prerequisites = {{1, 0},
                     {2, 0},
                     {3, 1},
                     {3, 2}};
    res = findOrder(numCourses, prerequisites);
    print_vector(res);
    numCourses = 1;
    prerequisites = {};
    res = findOrder(numCourses, prerequisites);
    print_vector(res);
}