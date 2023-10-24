#include <iostream>
#include"stack.hpp"
#include"abb.hpp"


// Funcion prec y infixToPostfix desde https://www.geeksforgeeks.org/convert-infix-expression-to-postfix-expression/

int prec(char c) {
    if (c == '^') return 3;
    else if (c == '/' || c == '*') return 2;
    else if (c == '+' || c == '-') return 1;
    else return -1;
}

std::string infixToPostfix(std::string str) {
    eda::Stack stack;
    std::string result;

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];

        // If the scanned character is
        // an operand, add it to output string.
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9'))
            result += c;

        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if (c == '(')
            stack.push(new eda::Node('('));

        // If the scanned character is an ‘)’,
        // pop and add to output string from the stack
        // until an ‘(‘ is encountered.
        else if (c == ')') {
            while (stack.top()->getData() != '(') {
                result += stack.top()->getData();
                stack.pop();
            }
            stack.pop();
        }

        else if (c == ' ')
            continue;
        // If an operator is scanned
        else {
            while (!stack.isEmpty()
                && prec(str[i]) <= prec(stack.top()->getData())) {
                result += stack.top()->getData();
                stack.pop();
            }
            stack.push(new eda::Node(c));
        }
    }

    // Pop all the remaining elements from the stack
    while (!stack.isEmpty()) {
        result += stack.top()->getData();
        stack.pop();
    }


    return result;
}

int main() {
    std::cout << """"""" CALCULADORA INTERACTIVA """"""" << std::endl;
    std::string exp = "1 + 2 * (5 ^ 2 - e) ^ (5 + g * 3) - 15";

    exp = infixToPostfix(exp);
    std::cout << exp << std::endl;
   
    return 0;
}