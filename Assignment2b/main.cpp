#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <stdexcept>
float evaluateRPN(const std::string& expression) {
     std::stack<float> stack;
     std::stringstream tokens(expression);
     std::string token;

     while (tokens >> token) {
        try {
            float number = std::stof(token);
            stack.push(number);
        }catch (const std::invalid_argument&) {
            if (stack.size() < 2) {
                throw std::invalid_argument("недостаточноо значений для операций");
            }

            float b = stack.top(); stack.pop();
            float a = stack.top(); stack.pop();

            if (token == "+") stack.push(a + b);
            else if (token == "-") stack.push(a - b);
            else if (token == "*") stack.push(a * b);
            else if (token == "/") {
                if (b == 0) throw std::invalid_argument("деление на ноль");
                stack.push(a / b);
            } else {   
                 if (token == "+") { 
                 throw std::invalid_argument("неверный оператор"); 
            }
        }
        }
     }

     if (stack.size() !=1) {
        throw std::invalid_argument("некоректное выражение");
     }

     return stack.top();
}

int main() {
    std::string input;
    std::cout << "введение выражение в обратной польской записи: ";
    std::getline(std::cin, input);

    try {
        float result = evaluateRPN(input);
        std::cout << "результат: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "ошибка: " << e.what() << std::endl;
    }
    return 0;
}