//
// Created by garen_lee on 2025/2/6.
/**
  ******************************************************************************
  * @file           : L102_levelOrder.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/6
  ******************************************************************************
  */
//

#include "L102_levelOrder.h"
vector<vector<int>> L102_levelOrder::levelOrder(TreeNode* root) {
    if(!root) return {};
    vector<vector<int>> result;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> vec;
        while(size--){
            TreeNode* node = q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            vec.push_back(node->val);
        }
        result.push_back(vec);
    }
    return result;
}
void L102_levelOrder::test(){
    vector<vector<int>> result;
    vector<int> vec;
    TreeNode*root;
    vec={3,9,20,-1,-1,15,7};
    root = create_treenode(vec,true);
    result = levelOrder(root);
    for (auto i:result){
        print_vector(i);
    }
    cout << "+++++" << endl;
    vec={1};
    root = create_treenode(vec,true);
    result = levelOrder(root);
    for (auto i:result){
        print_vector(i);
    }
    cout << "+++++" << endl;
    vec={};
    root = create_treenode(vec,true);
    result = levelOrder(root);
    for (auto i:result){
        print_vector(i);
    }
    cout << "+++++" << endl;
}