//
// Created by garen_lee on 2025/3/18.
/**
  ******************************************************************************
  * @file           : L207_canFinish.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/18
  ******************************************************************************
  */
//

#include "L207_canFinish.h"

bool L207_canFinish::canFinish(int numCourses, vector<vector<int>> &prerequisites) {
    edges.resize(numCourses);
    indeg.resize(numCourses);
    for (const auto& info: prerequisites) {
        edges[info[1]].push_back(info[0]);
        ++indeg[info[0]];
    }

    queue<int> q;
    for (int i = 0; i < numCourses; ++i) {
        if (indeg[i] == 0) {
            q.push(i);
        }
    }

    int visited = 0;
    while (!q.empty()) {
        ++visited;
        int u = q.front();
        q.pop();
        for (int v: edges[u]) {
            --indeg[v];
            if (indeg[v] == 0) {
                q.push(v);
            }
        }
    }

    return visited == numCourses;
}

void L207_canFinish::test() {
    vector<vector<int>> prerequisites = {{1, 0}};
    int numCourses = 2;
    cout << canFinish(numCourses, prerequisites) << endl;
    prerequisites = {{1, 0}, {0, 1}};
    numCourses = 2;
    cout << canFinish(numCourses, prerequisites) << endl;
}