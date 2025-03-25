//
// Created by garen_lee on 2025/3/25.
/**
  ******************************************************************************
  * @file           : L210_findOrder.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/25
  ******************************************************************************
  */
//

#ifndef BREADTHFIRSTSEARCH_L210_FINDORDER_H
#define BREADTHFIRSTSEARCH_L210_FINDORDER_H

#include "util.h"
class L210_findOrder : public LeetcodeBreadthFirstSearch {
private:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites);
    void dfs(int u);
    // 存储有向图
    vector<vector<int>> edges;
    // 标记每个节点的状态：0=未搜索，1=搜索中，2=已完成
    vector<int> visited;
    // 用数组来模拟栈，下标 0 为栈底，n-1 为栈顶
    vector<int> result;
    // 判断有向图中是否有环
    bool valid = true;
public:
    L210_findOrder() {}
    void test();
};


#endif //BREADTHFIRSTSEARCH_L210_FINDORDER_H
