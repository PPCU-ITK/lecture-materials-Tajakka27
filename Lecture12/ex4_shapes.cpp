#include <iostream>

// EXERCISE 4: Abstract Classes

class Shape {
public:
    // TODO: Turn this into a Pure Virtual Function.
    // virtual double area() ... ?
   virtual double area() {
        return 0.0;
    }
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    double area() override {
        return width * height;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}

    // TODO: Implement area() override (Area = 3.14 * radius * radius)
    double area() override {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Shape s; // This should error if you make Shape abstract correctly!

    Rectangle rect(5.0, 4.0);
    Circle circ(3.0);

    std::cout << "Rectangle Area: " << rect.area() << "\n";
    std::cout << "Circle Area: " << circ.area() << "\n";

    return 0;
}