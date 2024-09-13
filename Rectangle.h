#ifndef RECTANGLE_H // Include guard to prevent multiple inclusions of this header file
#define RECTANGLE_H

class Rectangle { // Declaration of the Rectangle class
private:
    double lenght; // Private member variable to store the length of the rectangle
    double width; // Private member variable to store the width of the rectangle

public:
    Rectangle(); // Default constructor declaration

    Rectangle(double len, double wid); // Parameterized constructor declaration

    double getLength() const; // Getter for length, marked as const to indicate it doesn't modify the object
    double getWidth() const; // Getter for width, marked as const to indicate it doesn't modify the object

    void setLenght(double len); // Setter for length
    void setWidth(double wid); // Setter for width

    double area() const; // Method to calculate the area, marked as const
    double perimeter() const; // Method to calculate the perimeter, marked as const
};

#endif // End of include guard
