#include "lib1/lib1.hpp"
#include <gtest/gtest.h>

TEST(FactorialTest, N1) {

  // Expect equality.
  EXPECT_EQ(lib1::factorial(1), 1);
}

TEST(FactorialTest, N2) {

  // Expect equality.
  EXPECT_EQ(lib1::factorial(2), 2);
}

TEST(FactorialTest, N4) {

  // Expect equality.
  EXPECT_EQ(lib1::factorial(4), 24);
}

TEST(FactorialTest, N5) {

  // Expect equality.
  EXPECT_EQ(lib1::factorial(5), 5 * lib1::factorial(4));
}
