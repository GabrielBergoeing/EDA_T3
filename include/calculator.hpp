#ifndef CALCULATOR_HPP_
#define CALCULATOR_HPP_

#include <iostream>
#include <string>
#include <map>
#include <cmath>

int prec(char c);
std::string infixToPostfix(std::string str);

void asignVar(std::string expr, std::map<std::string, int> &vars);

int sum(int a, int b);
int res(int a, int b);
int mult(int a, int b);
int divs(int a, int b);
int pot(int a, int b);
int solveCalculation(std::string str);

#endif /* CALCULATOR_HPP_ */