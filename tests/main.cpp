#include <gtest/gtest.h>

TEST(testSuite, test) {
  int x = 1;
  EXPECT_EQ(x, 1);
}

int main(int argc, char**argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
