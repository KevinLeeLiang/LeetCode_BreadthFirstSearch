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
#include "L130_solve/L130_solve.h"
#include "L199_rightSideView/L199_rightSideView.h"
#include "L200_numIslands/L200_numIslands.h"
#include "L207_canFinish/L207_canFinish.h"
#include "L210_findOrder/L210_findOrder.h"
#include "L226_invertTree/L226_invertTree.h"
#include "L279_numSquares/L279_numSquares.h"
#include "L297_serializeAnddeserialize/L297_serializeAnddeserialize.h"
#include "L301_removeInvalidParentheses/L301_removeInvalidParentheses.h"
#include "L310_findMinHeightTrees/L310_findMinHeightTrees.h"
#include "L322_coinChange/L322_coinChange.h"
#include "L329_longestIncreasingPath/L329_longestIncreasingPath.h"
#include "L365_canMeasureWater/L365_canMeasureWater.h"
#include "L399_calcEquation/L399_calcEquation.h"
#include "L404_sumOfLeftLeaves/L404_sum0fLeftLeaves.h"

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
        } else if (title == "L130") {
            std::shared_ptr<L130_solve> tmp= std::make_shared<L130_solve>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L199") {
            std::shared_ptr<L199_rightSideView> tmp= std::make_shared<L199_rightSideView>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L200") {
            std::shared_ptr<L200_numIslands> tmp= std::make_shared<L200_numIslands>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L207") {
            std::shared_ptr<L207_canFinish> tmp= std::make_shared<L207_canFinish>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L210") {
            std::shared_ptr<L210_findOrder> tmp= std::make_shared<L210_findOrder>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L226") {
            std::shared_ptr<L226_invertTree> tmp= std::make_shared<L226_invertTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L279") {
            std::shared_ptr<L279_numSquares> tmp= std::make_shared<L279_numSquares>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L297") {
            std::shared_ptr<L297_serializeAnddeserialize> tmp= std::make_shared<L297_serializeAnddeserialize>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L301") {
            std::shared_ptr<L301_removeInvalidParentheses> tmp= std::make_shared<L301_removeInvalidParentheses>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L310") {
            std::shared_ptr<L310_findMinHeightTrees> tmp= std::make_shared<L310_findMinHeightTrees>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L322") {
            std::shared_ptr<L322_coinChange> tmp= std::make_shared<L322_coinChange>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L329") {
            std::shared_ptr<L329_longestIncreasingPath> tmp= std::make_shared<L329_longestIncreasingPath>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L365") {
            std::shared_ptr<L365_canMeasureWater> tmp= std::make_shared<L365_canMeasureWater>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L399") {
            std::shared_ptr<L399_calcEquation> tmp= std::make_shared<L399_calcEquation>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBreadthFirstSearch>(tmp);
        } else if (title == "L404") {
            std::shared_ptr<L404_sum0fLeftLeaves> tmp= std::make_shared<L404_sum0fLeftLeaves>();
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
