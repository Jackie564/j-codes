/*
Author: Jackline Mwaniki
Reg No: BSE-01-0058/2025
Description: Polymorphism 
Date: 27/3/2025
version 1
*/
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void area() {
        cout << "Area calculation not defined for generic shape." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Area of Rectangle: " << (length * width) << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle: " << (3.14 * radius * radius) << endl;
    }
};

// Main class (PolymorphismTest)
int main() {
    Shape* shapePtr;
    int choice;

    cout << "Choose a shape:\n1. Rectangle\n2. Circle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        double l, w;
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
        shapePtr = new Rectangle(l, w);
    }
    else if (choice == 2) {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        shapePtr = new Circle(r);
    }
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    shapePtr->area();  // Polymorphism in action

    delete shapePtr;
    return 0;
}
