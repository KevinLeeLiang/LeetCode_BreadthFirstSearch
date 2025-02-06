//
// Created by garen-lee on 2025/1/29.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/29
  ******************************************************************************
  */
//

#ifndef LEETCODE_HASHTABLE_TEST_FACTORY_H
#define LEETCODE_HASHTABLE_TEST_FACTORY_H
#include <memory>
#include "L100_isSameTree/L100_isSameTree.h"
#include "L101_isSymmetric/L101_isSymmetric.h"
#include "L102_levelOrder/L102_levelOrder.h"
#include "L103_zigzagLevelOrder/L103_zigzagLevelOrder.h"
class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L100") {
            std::shared_ptr<L100_isSameTree> tmp= std::make_shared<L100_isSameTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L101") {
            std::shared_ptr<L101_isSymmetric> tmp= std::make_shared<L101_isSymmetric>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L102") {
            std::shared_ptr<L102_levelOrder> tmp= std::make_shared<L102_levelOrder>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L103") {
            std::shared_ptr<L103_zigzagLevelOrder> tmp= std::make_shared<L103_zigzagLevelOrder>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodeBreadthFirstSearch> solution_;
};


#endif //LEETCODE_HASHTABLE_TEST_FACTORY_H
