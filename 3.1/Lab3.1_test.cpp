#include "Triad.h"
#include <gtest/gtest.h>
#define TESTING

TEST(Lab, firstTest)
{
    Triad a(5, 5, 5);
    a--;
    int functionResult = a.GetSeconds();
    int expectedValue = 4;

    ASSERT_EQ(expectedValue, functionResult);
}

#ifdef TESTING
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#endif
