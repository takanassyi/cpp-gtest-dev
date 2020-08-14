/**
 * @file test_calculator.cc
 * @author takanassyi (takanassyi@gmail.com)
 * @brief calculator unit test code
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020 takanassyi.
 *
 */
#include <gtest/gtest.h>

#include "../src/calculator.h"

TEST(TestSuccess, Success) {
  Calculator calculator;
  EXPECT_EQ(6, calculator.Addition(3, 3));
  EXPECT_EQ(0, calculator.Subtraction(3, 3));
  EXPECT_EQ(9, calculator.Multiplication(3, 3));
  EXPECT_EQ(1, calculator.Division(3, 3));
}

TEST(TestException, ZeroDivide) {
  Calculator calculator;
  EXPECT_ANY_THROW(calculator.Division(1, 0));
}

TEST(TestException, NoException) {
  Calculator calculator;
  EXPECT_NO_THROW(calculator.Division(1, 1));
}
