// Write a program that uses a structure called point to model a point. Define three points, 
// and have the user input values of two of them and set the value of third point equal to the
// sum of the other two and display the value of the new point.

#include <iostream>
#include <math.h>
using namespace std;
class Point
{
public:
float x, y;
Point operator+(Point p)
{
Point point;
point.x = this->x + p.x;
point.y = this->y + p.y;
return point;
}
void printCord()
{
cout << "Point is : (" << x << "," << y << ")\n";
}
void distFromOrg()
{
cout << "Distance from origin : " << sqrtf(((x * x) + (y * y))) << endl;
}
};int main()
{
Point a, b, c;
cout << "Enter Point 1\n ";
cout << "\tx: ";
cin >> a.x;
cout << "\ty: ";
cin >> a.y;
cout << "Enter Point 2\n ";
cout << "\tx: ";
cin >> b.x;
cout << "\ty: ";
cin >> b.y;
c = a + b;
c.printCord();
c.distFromOrg();
return 0;
}
