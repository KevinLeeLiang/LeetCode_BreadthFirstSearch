//
// Created by garen_lee on 2025/6/18.
/**
  ******************************************************************************
  * @file           : L547_findCircleNum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/18
  ******************************************************************************
  */
//

#include "L547_findCircleNum.h"

int L547_findCircleNum::findCircleNum(vector<vector<int>>& M) {
    int cities = M.size();
    vector<int> visited(cities);
    int provinces = 0;
    queue<int> Q;
    for (int i = 0; i < cities; i++) {
        if (!visited[i]) {
            Q.push(i);
            while (!Q.empty()) {
                int j = Q.front();
                Q.pop();
                visited[j] = 1;
                for (int k = 0; k < cities; k++) {
                    if (M[j][k] == 1 && !visited[k]) {
                        Q.push(k);
                    }
                }
            }
            provinces++;
        }
    }
    return provinces;
}

void L547_findCircleNum::test() {
    vector<vector<int>> M = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
    cout << findCircleNum(M) << endl;
    M = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    cout << findCircleNum(M) << endl;
}