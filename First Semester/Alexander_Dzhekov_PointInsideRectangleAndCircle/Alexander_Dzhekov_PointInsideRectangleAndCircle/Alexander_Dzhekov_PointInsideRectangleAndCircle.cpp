#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double r, px, py, ax, ay, cx, cy;

	cout << "Enter the following:" << endl << endl;

	cout << "The coordinates of the A corner of the Rectangle(x,y): " << endl;
	cin >> ax >> ay;
	cout << "The coordinates of the C corner of the Rectangle(x,y): " << endl;
	cin >> cx >> cy;
	cout << "Radius of the circle: ";
	cin >> r;
	cout << "The coordinates of the point(x,y): " << endl;
	cin >> px >> py;

	bool isInsideCircle = pow(r, 2) >= (pow(px, 2) + pow(py, 2));
	bool isInsideRectangle = px >= ax && px <= cx && py >= ay && py <= cy;

	if (isInsideCircle)
	{
		cout << "The point is INSIDE the Circle" << endl;
	}
	else
	{
		cout << "The point is OUTSIDE the Circle" << endl;
	}

	if (isInsideRectangle)
	{
		cout << "The point is INSIDE the Rectangle" << endl;
	}
	else
	{
		cout << "The point is OUTSIDE the Rectangle" << endl;
	}
}