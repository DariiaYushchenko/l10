#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Enter the value of a: ";
    std::cin >> a;

    std::cout << "Enter the value of b: ";
    std::cin >> b;

    std::cout << "Enter the value of c: ";
    std::cin >> c;

    if (a != 0 && a - b + c >= 0) {

        double result = (std::sqrt(a + b - c) / std::pow(a, 2)) + std::log(a * b * c) - std::cos(b);

        std::cout << "Result of the expression: " << result << std::endl;
    }
    else {
        std::cout << "The expression isn't defined for the given values of a, b, c." << std::endl;
    }

    return 0;
}
