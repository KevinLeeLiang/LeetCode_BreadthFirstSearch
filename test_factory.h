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
#include "L104_maxDepth/L104_maxDepth.h"
#include "L107_levelOrderBottom/L107_levelOrderBottom.h"
#include "L111_minDepth/L111_minDepth.h"
#include "L112_hasPathSum/L112_hasPathSum.h"
#include "L116_connect/L116_connect.h"
#include "L117_connect/L117_connect.h"
#include "L126_findLadders/L126_findLadders.h"
#include "L127_ladderLength/L127_ladderLength.h"

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
        } else if (title == "L104") {
            std::shared_ptr<L104_maxDepth> tmp= std::make_shared<L104_maxDepth>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L107") {
            std::shared_ptr<L107_levelOrderBottom> tmp= std::make_shared<L107_levelOrderBottom>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L111") {
            std::shared_ptr<L111_minDepth> tmp= std::make_shared<L111_minDepth>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L112") {
            std::shared_ptr<L112_hasPathSum> tmp= std::make_shared<L112_hasPathSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L116") {
            std::shared_ptr<L116_connect> tmp= std::make_shared<L116_connect>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L117") {
            std::shared_ptr<L117_connect> tmp= std::make_shared<L117_connect>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L126") {
            std::shared_ptr<L126_findLadders> tmp= std::make_shared<L126_findLadders>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L127") {
            std::shared_ptr<L127_ladderLength> tmp= std::make_shared<L127_ladderLength>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else {
            cout << "no solution" << endl;
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
