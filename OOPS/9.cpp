// Create a class with two integer data members as real and imaginary. Design a method to input the
// complex number, design a function to perform addition operation between the two complex
// numbers by overloading the + operator. Finally display the result.

#include <iostream>
using namespace std;
class Complex {
private:
float real;
float imag;
public:
Complex() : real(0), imag(0) {}
Complex(float real, float imag): real(real), imag(imag) {}
Complex operator + (Complex & other) const {
Complex temp;
temp.real = real + other.real;
temp.imag = imag + other.imag;
return temp;
}
void display() const {
cout <<real << " + " << imag <<"i"<<endl;
}
friend istream& operator >> (istream& in, Complex& c);
};
istream& operator >> (istream& in, Complex& c) {
in >> c.real;
in >> c.imag;
return in;
}
int main() {
Complex c, d, e;
cin >> c;
c.display();
cout<<endl;
cin >> d;
d.display();
cout<<endl;
e = c + d;
cout<<"Resultant sum is: \n";
e.display();
}