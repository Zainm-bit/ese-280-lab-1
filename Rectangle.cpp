#include "Rectangle.h" // Include the header file for the Rectangle class

// Default constructor initializes length and width to 1.0
Rectangle::Rectangle() : length(1.0), width(1.0) {

}

// Parameterized constructor initializes length and width with provided values
Rectangle::Rectangle(double len, double wid) : length(len), width(wid) { 
    
}

// Getter method for length, marked as const since it does not modify the object
double Rectangle::getLength() const {
    return length; // Return the value of length
}

// Getter method for width, marked as const since it does not modify the object
double Rectangle::getWidth() const {
    return width; // Return the value of width
}

// Setter method for length, allows modification of the length attribute
void Rectangle::setLength(double len) { // Note: 'setlength' should be 'setLength' for consistency
    length = len; // Set the length to the provided value
}

// Setter method for width, allows modification of the width attribute
void Rectangle::setWidth(double wid) {
    width = wid; // Set the width to the provided value
}
