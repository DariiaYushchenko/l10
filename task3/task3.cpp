#include <iostream>
#include <cmath>
#define M_PI 3.14
using namespace std;

int main() {

    double z1, z2, a;

    std::cout << "Enter the angle (in degrees): ";
    std::cin >> a;
    if (a == 0) {
        std::cout << "Incorrect number";
    }

    else {
        a = a * M_PI / 180;

        z1 = sin(M_PI / 2 + 3 * a) / (1 - sin(3 * a - M_PI));
        z2 = (cos(((5 * M_PI) / 4) + (3 * a) / 2)) / (sin(((5 * M_PI) / 4) + (3 * a) / 2));

        cout << "Result using the first formula: " << z1 << endl;
        cout << "Result using the second formula: " << z2 << endl;
    }
    return 0;

}