#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    std::cout << "Addition: " << calc.Add(3, 5) << std::endl;
    std::cout << "Subtraction: " << calc.Sub(10, 4) << std::endl;
    return 0;
}
