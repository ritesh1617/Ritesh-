#include<iostream>
using namespace std;

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor to initialize the lengths of the sides
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Member function to determine if the triangle is equilateral
    bool isEquilateral() const 
	{
        return (side1 == side2) && (side2 == side3);
    }

    // Member function to determine if the triangle is isosceles
    bool isIsosceles() const
	 {
        return (side1 == side2) || (side1 == side3) || (side2 == side3);
    }

    // Member function to determine if the triangle is scalene
    bool isScalene() const {
        return (side1 != side2) && (side1 != side3) && (side2 != side3);
    }
};

int main() {
    // Getting input values for the lengths of the sides
    double side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // Creating an instance of the Triangle class
    Triangle myTriangle(side1, side2, side3);

    // Determining and displaying the type of triangle
    if (myTriangle.isEquilateral()) 
	{
        cout << "The triangle is equilateral.\n";
    } else if (myTriangle.isIsosceles())
	 {
        cout << "The triangle is isosceles.\n";
    } else if (myTriangle.isScalene())
	{
        cout << "The triangle is scalene.\n";
    } else 
	{
        cout << "Invalid input for a triangle.\n";
    }

   
}

