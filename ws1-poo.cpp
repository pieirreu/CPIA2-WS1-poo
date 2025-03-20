#include <iostream>
#include <cmath>

class Circle {
    double x, y; // Position of the center
    double r; // Radius
public:
    Circle(double x, double y, double r) : x(x), y(y), r(r) {}
    int get_x() {
        return x;
    }
    int get_y() {
        return y;
    }
    void set_pos(double x, double y) {
        this->x = x;
        this->y = y;
    }
    double perimeter() {
        return 2 * M_PI * r;
    }
    
};


//TODO: Add a method to calculate the area of the circle

// TODO: Add a method to calculate the area of the rectangle
class Rectangle {
    double x, y; // Position of the top left corner
    double w, h; // Width and height
public:
    Rectangle(double x, double y, double w, double h) : x(x), y(y), w(w), h(h) {}
    int get_x() {
        return x;
    }
    int get_y() {
        return y;
    }

    void set_pos(double x, double y) {
        this->x = x;
        this->y = y;
    }
    double perimeter() {
        return 2 * (w + h);
    }
};


int main() {
    Circle c(0, 0, 1);
    std::cout << c.perimeter() << std::endl;
    c.set_pos(1, 1);
    std::cout  << "Coordinates of the center: (" << c.get_x() << ", " << c.get_y() << ")" << std::endl;

    Rectangle r(0, 0, 1, 2);
    std::cout << r.perimeter() << std::endl;
    c.set_pos(-1, -1);
    std::cout  << "Coordinates of the top left corner: (" << r.get_x() << ", " << r.get_y() << ")" << std::endl;
    return 0;
}