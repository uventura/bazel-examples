#include <iostream>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "TestSpecialMath.h"

using ::testing::AtLeast;

TEST(SpecialTest, SpecialTestName){
    SpecialMath special;

    //EXPECT_EQ
    EXPECT_EQ(special.FastExp(3,8), 6561);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}