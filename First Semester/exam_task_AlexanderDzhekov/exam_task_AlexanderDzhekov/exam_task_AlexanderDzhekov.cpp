#include <iostream>
using namespace std;

//triangle area by points coordinates
double area(int x1, int y1, int x2, int y2, int x3, int y3)
{
	return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

bool isInTriangle(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{

	float A = area(x1, y1, x2, y2, x3, y3);


	float A1 = area(x, y, x2, y2, x3, y3);


	float A2 = area(x1, y1, x, y, x3, y3);


	float A3 = area(x1, y1, x2, y2, x, y);

	return (A == A1 + A2 + A3);
}

int main()
{
	int x, y;
	cout << "Please enter the coordinates of your point:" << endl;

	cout << "X: ";
	cin >> x;

	cout << "Y: ";
	cin >> y;

	int outerSquareSide = 20;
	int innerSquareSide = 8;
	int innerSquareDiagonal = (pow(innerSquareSide, 2) * 2);

	bool isInsideOuterSquare = x < outerSquareSide&& y < outerSquareSide;
	bool isInsideInnerSquare = x < innerSquareSide&& y < innerSquareSide;

	int outerCircleRadius = outerSquareSide / 2;
	int innerCircleRadius = innerSquareDiagonal / 2;
	//  pow(abs(xCircleCenter - px), 2.0) + pow(abs(yCircleCenter - py), 2.0) <= outerCircleRadius
	bool isInsideOuterCircle = pow(outerCircleRadius, 2) >= (pow(x, 2) + pow(y, 2));
	bool isInsideInnerCircle = pow(innerCircleRadius, 2) >= (pow(x, 2) + pow(y, 2));

	// for the triangle
	int ax = outerSquareSide / 2;
	int bx = 0;
	int cx = 0;
	
	int ay = 0;
	int by = outerSquareSide / 2;
	int cy = 0;

	bool isInsideTriangle = isInTriangle(ax, ay, bx, by, cx, cy, x, y);

	if (isInsideInnerSquare)
	{
		cout << "The point is in the Inner square" << endl;
	}
	else
	{
		cout << "The point is outside of the Inner square" << endl;
	}

	if (isInsideOuterSquare)
	{
		cout << "The point is in the Outer square" << endl;
	}
	else
	{
		cout << "The point is outside of the Outer square" << endl;
	}

	if (!isInsideInnerCircle &&  isInsideOuterCircle)
	{
		cout << "The point is in the ring formed by the 2 circles" << endl;
	}
	else
	{
		cout << "The point is outside of the ring formed by the 2 circles" << endl;
	}

	if (isInsideTriangle)
	{
		cout << "The point is in the triangle" << endl;
	}
	else
	{
		cout << "The point is outside of the triangle" << endl;
	}
}