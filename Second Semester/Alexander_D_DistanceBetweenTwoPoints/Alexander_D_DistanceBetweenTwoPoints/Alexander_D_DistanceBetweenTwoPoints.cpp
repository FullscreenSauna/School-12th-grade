#include <iostream>

using namespace std;

double calclateDistance(double firstX, double firstY, double secondX, double secondY)
{
    double horizontalDistance = abs(firstX - secondX);
    double verticalDistance = abs(firstY - secondY);

    double distance = sqrt(pow(horizontalDistance, 2) + pow(verticalDistance, 2));

    return distance;
}

int main()
{
    double x1, y1, x2, y2;
    
    cout << "Input the following parameters:" << endl;

    cout << "The coordinates of the first point(x,y):" << endl;
    cin >> x1 >> y1;

    cout << "The coordinates of the second point(x,y):" << endl;
    cin >> x2 >> y2;

    double distanceBetweenPoints = calclateDistance(x1, y1, x2, y2);

    cout << "The distance between the two points is: " << distanceBetweenPoints;
}
