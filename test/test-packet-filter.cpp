#include "Solution.h"
#include <gtest/gtest.h>

class TestSolution : public ::testing::Test {
public:
    TestSolution(): ::testing::Test() {}
};

TEST_F(TestSolution, test1) {
    {
        Solution s;
        EXPECT_EQ(s.divide(10, 3), 3);

    }
}
TEST_F(TestSolution, test2) {
    {
        Solution s;
        EXPECT_EQ(s.divide(7, -3), -2);

    }
}