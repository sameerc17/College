// Create the equivalent four-function calculator. The program should request the user to enter a
// number, an operator, and another number. It should carry out the specified arithmetic operation:
// adding, multiplying, dividing or subtracting the two numbers and finally print the result.

#include <iostream>
using namespace std;
int main()
{
char loop = 'y', op;
double a, b, result;
while (loop == 'y')
{
cout << "Enter [value] [operator] [value] : ";
cin >> a;
cin >> op;
cin >> b;
switch (op)
{
case '+':
result = a + b;
cout << result;
break;case '-':
result = a - b;
cout << result;
break;
case '*':
result = a * b;
cout << result;
break;
case '/':
result = a / b;
cout << result;
break;
default :
cout << "Bad operator";
exit(0);
}
cout << "\nDo another Calculation ? (y/n)";
cin >> loop;
}
return 0;
}