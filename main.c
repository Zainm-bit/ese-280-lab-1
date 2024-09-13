#include <iostream> // Include the iostream library for input and output operations
#include "Rectangle.h" // Include the Rectangle class header file

int main() { // Main function where program execution begins
    Rectangle rect1; // Create an instance of Rectangle with default constructor
    Rectangle rect2(4.0, 5.0); // Create an instance of Rectangle with specified length and width

    // Output the dimensions of Rectangle 1
    std::cout << "Rectangle 1: Length = " << rect1.getLength() << ", Width = " << rect1.getWidth() << std::endl;

    // Output the dimensions of Rectangle 2
    std::cout << "Rectangle 2: Length = " << rect2.getLength() << ", Width = " << rect2.getWidth() << std::endl;

    rect1.setLength(3.5); // Set the length of Rectangle 1 to 3.5
    rect1.setWidth(2.0); // Set the width of Rectangle 1 to 2.0

    // Output the updated dimensions of Rectangle 1
    std::cout << "Rectangle 1: Length = " << rect1.getLength() << ", Width = " << rect1.getWidth() << std::endl;

    return 0; // Return 0 to indicate successful execution of the program
}
