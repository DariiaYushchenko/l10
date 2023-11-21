#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;

int main() {
    int choice;

    cout << "Choose a task to execute:" << endl;
    cout << "1. Calculate the surface area and volume of a sphere." << endl;
    cout << "2. Calculate the distance light travels in a day and an hour." << endl;

    cout << "Enter the task number (1 or 2): ";
    cin >> choice;

    switch (choice) {
    case 1: {
        double radius;
        cout << "Enter the radius of the sphere: ";
        cin >> radius;

        double surfaceArea = 4 * M_PI * pow(radius, 2);
        double volume = (4 * M_PI * pow(radius, 3)) / 3;

        cout << "Surface Area: " << surfaceArea << endl;
        cout << "Volume: " << volume << endl;

        break;
    }

    case 2: {
        double speedOfLight = 299792;

        double distanceInADay = speedOfLight * 24 * 60 * 60;

        double distanceInAnHour = speedOfLight * 60 * 60;

        cout << "Distance light travels in a day: " << distanceInADay << " km" << endl;
        cout << "Distance light travels in an hour: " << distanceInAnHour << " km" << endl;

        break;
    }

    default:
        cout << "Invalid choice. Please enter either 1 or 2." << endl;
    }

    return 0;
}
