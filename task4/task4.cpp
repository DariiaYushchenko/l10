#include <iostream>
#include <cmath>

int main() {

	const double b = 2.0;
	double k = 1.8;

	double t = pow(b, 2) + pow(k, 3);

	double a = sqrt(b + t);

	double y = pow(sin((pow(a, 2) + (pow(b, 2)))), 4);

	std::cout << "Result of the function y: " << y << std::endl;
	std::cout << "a = " << a << "\nt = " << t << "\ny = " << y;

	return 0;
}

