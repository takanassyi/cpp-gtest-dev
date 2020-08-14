/**
 * @file calculator.cc
 * @author takanassyi
 * @brief calculator class
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020 takanassyi
 *
 */
#include "./calculator.h"

#include <iostream>
#include <stdexcept>
using namespace std;

int Calculator::Addition(int x, int y) { return x + y; }
int Calculator::Subtraction(int x, int y) { return x - y; }
int Calculator::Multiplication(int x, int y) { return x * y; }
int Calculator::Division(int x, int y) {
  if (y == 0) {
    throw runtime_error("Divide by zero exception.");
  }
  return x / y;
}