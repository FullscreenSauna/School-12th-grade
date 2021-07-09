#include <iostream>
using namespace std;

int main()
{
	int px, py, firstCircleCenterx, firstCircleCentery, secondCircleCenterx, secondCircleCentery, firsCircleRadius, secondCircleRadius;

	cout << "Enter the X and Y of the point" << endl;
	cin >> px >> py;
	cout << "Enter the X and Y of the first circle" << endl;
	cin >> firstCircleCenterx >> firstCircleCentery;
	cout << "Enter the X and Y of the second circle" << endl;
	cin >> secondCircleCenterx >> secondCircleCentery;
	cout << "Enter the radius of the first circle" << endl;
	cin >> firsCircleRadius;
	cout << "Enter the radius of the second circle" << endl;
	cin >> secondCircleRadius;

	double firstCircleChangeInX = pow(firstCircleCenterx - px, 2);
	double firstCircleChangeInY = pow(firstCircleCentery - py, 2);
	double PointDistanceFromFirstCircleCenter = sqrt(firstCircleChangeInX + firstCircleChangeInY);

	double secondCircleChangeInX = pow(secondCircleCenterx - px, 2);
	double secondCircleChangeInY = pow(secondCircleCentery - py,2);
	double PointDistanceFromSecondCircleCenter = sqrt(secondCircleChangeInX + secondCircleChangeInY);


	bool isInsideFirstCircle = firsCircleRadius >= PointDistanceFromFirstCircleCenter;
	bool isInsideSecondCircle = secondCircleRadius >= PointDistanceFromSecondCircleCenter;

	bool isInBoth = false;

	if (isInsideFirstCircle)
	{
		if (isInsideSecondCircle)
		{
			isInBoth = true;
		}
	}

	if (isInBoth)
	{
		cout << "The point is in both circles";
	}
	else
	{
		if (isInsideFirstCircle)
		{
			cout << "The point is only in the first circle";
		}
		else if (isInsideSecondCircle)
		{
			cout << "The point is only in the second circle";
		}
		else
		{
			cout << "The point isn't in any of the two circles";
		}
	}
}
