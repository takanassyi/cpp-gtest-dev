/**
 * @file calculator.h
 * @author takanassyi
 * @brief calculator class
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020 takanassyi
 *
 */
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <iostream>

class Calculator {
 public:
  int Addition(int x, int y);
  int Subtraction(int x, int y);
  int Multiplication(int x, int y);
  int Division(int x, int y);
};

#endif