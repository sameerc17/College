// Write a program that uses class to store three parts of a phone number separately. Create two objects
// of the class, initialize one of it and have user input number for the other. Display both the numbers.

#include<iostream>
using namespace std;
class phone{
public:
int areacode,exchange,number;
phone(){
areacode = 1001;
exchange = 902;
number = 107;
}
void display(){
cout << "(" << areacode << ")" << exchange << "-" << number;
}
};
int main(){
phone a,b;
cout << "Enter a Phone Number ";
cout << "[Area code] [Exchange] [Number]\n";
cin >> a.areacode;
cin >> a.exchange;
cin >> a.number;
a.display();
cout<<endl<<"Initialized at run time\n\n";
b.display();
cout<<endl<<"Initialized at compile time\n";
return 0;
}