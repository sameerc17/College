//Write a function to raise a number ‘n’ to power ‘p’. Also use default value for ‘p’ as 2.

#include <iostream>
using namespace std;
void pow(double n, int p = 2)
{
double result = n;
for (int i = 1; i < p; i++)
{
result *= n;
}
cout << result<<endl;
}
int main()
{
double n;
int p;
cout << "Enter n: ";
cin >> n;
cout << "Enter int power(Enter 0 to skip): ";
cin >> p;
if(p==0){
pow(n);
}
else if(p > 0){pow(n,p);
}
else{
cout << "Wrong argument\n";
}
return 0;
}
