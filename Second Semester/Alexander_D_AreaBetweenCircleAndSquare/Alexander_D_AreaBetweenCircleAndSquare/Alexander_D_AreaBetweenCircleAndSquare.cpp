#include <iostream>

using namespace std;

double square(double num)
{
    return num * num;
}

double areaOfSquare(double side)
{
    return square(side);
}

double areaOfCircle(double radius)
{
    const double PI = 3.14;
    return PI * square(radius);
}

double areaOfSectionWthBiggerSquare(double squareSide, double circleRadius)
{
    return areaOfSquare(squareSide) - areaOfCircle(circleRadius);
}

int main()
{
    double squareSide, circleRadius;

    cout << "Input the following parameters:" << endl;

    cout << "The side of the square: ";
    cin >> squareSide;

    cout << "The radius of the circle: ";
    cin >> circleRadius;

    cout << "The area of the section between the square and circle: " << areaOfSectionWthBiggerSquare(squareSide, circleRadius);
}