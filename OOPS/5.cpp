// Create 2 classes DB and DM which stores the value of distance. Dm stores distance in metres and
// centimetres, DB stores distance in feet and inches. Write a program that can read values for the
// class objects and add one object of DM with another of DB.Use a friend function to carry out
// addition operation. The object that stores the result may be a DM or DB object depending on the
// units in which result are required.The Display should be in format of feet and inches or metre
// and centimetre depending on the object on display.

#include <iostream>
using namespace std;
class DB;
class DM
{
float meter;
float cm;
public:
void takeinput(int a, int b)
{
meter = a;
cm = b;
}
void sumindb(DB c);
void sumindm(DB c);
};
class DB
{
float feet;
float inch;public:
void takeinput(int a, int b)
{
feet = a;
inch = b;
}
friend void DM::sumindb(DB c);
friend void DM::sumindm(DB c);
};
void DM::sumindb(DB c)
{
float in = c.inch + (12 * c.feet) + ((12 * (meter * 100 + cm)) / 30);
int k = (int)in / 12;
float ink = in - k;
cout << "The data is " << k << " foot and " << ink << " inches\n";
}
void DM::sumindm(DB c)
{
float in = (c.inch * 30) / 12 + (30 * c.feet) + meter * 100 + cm;
int k = (int)in / 100;
float ink = in - k;
cout << "The data is " << k << " meters and " << ink << " centimeters\n";
}
int main()
{
DB d1;
DM d2;
int meter, cm, feet, inch;
cout << "Enter the data in Meters and Centimeters :\n";
cin >> meter;
cin >> cm;
d2.takeinput(meter, cm);
cout << "Enter the data in feet and inches :\n";
cin >> feet;
cin >> inch;
d1.takeinput(feet, inch);
cout << "After Adding the two data \n";
d2.sumindb(d1);
d2.sumindm(d1);
}