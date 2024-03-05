// This porgram takes a user input for the coordinates of the center of a circle, and the coordinates for a point on the circumference. It then prints 
// the radius, circumference and area

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.1416;

// Precond: valid coordinates, postcond: returns distance
double calcDistance(double p1_x, double p1_y, double p2_x, double p2_y) {
    return sqrt(pow(p2_x - p1_x, 2) + pow(p2_y - p1_y, 2));
}

// Precond: valid coords, postcond: returns radius
double calcRadius(double center_x, double center_y, double point_x, double point_y) {
    return calcDistance(center_x, center_y, point_x, point_y);
}

// Precond: valid radius, postcond: returns circumference
double calcCircumference(double radius) {
    return 2 * PI * radius;
}
// Precond: valid radius, postcond: area of circle given radius
double calcArea(double radius) {
    return PI * pow(radius, 2);
}

int main() {
    double center_x, center_y, point_x, point_y;
    char comma;

    cout << "Insert the coordinates for the center of the circle (x y): ";
    cin >> center_x >> comma >> center_y;

    cout << "Insert the coordinates for a point on the circumference (x y): ";
    cin >> point_x >> comma >> point_y;

    double radius = calcRadius(center_x, center_y, point_x, point_y);

    double circumference = calcCircumference(radius);
    double area = calcArea(radius);

    cout << "The radius is: " << radius << endl;
    cout << "The circumference: " << circumference << endl;
    cout << "The area is: " << area << endl;

    return 0;
}
