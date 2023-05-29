#include <iostream>
#include <cmath>


double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}


double calculateCircleArea(double radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    double length, width, base, height, radius;
    

    std::cout << "Enter length and width of the rectangle: ";
    std::cin >> length >> width;
    
    
    double rectangleArea = calculateRectangleArea(length, width);
    std::cout << "Area of the rectangle: " << rectangleArea << std::endl;
    
    
    std::cout << "Enter base and height of the triangle: ";
    std::cin >> base >> height;

    double triangleArea = calculateTriangleArea(base, height);
    std::cout << "Area of the triangle: " << triangleArea << std::endl;

    std::cout << "Enter radius of the circle: ";
    std::cin >> radius;
    
    double circleArea = calculateCircleArea(radius);
    std::cout << "Area of the circle: " << circleArea << std::endl;
    
    return 0;
}