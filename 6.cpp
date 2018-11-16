// Write a function reversit() which passes a string as a parameter and reverse the string.

#include <iostream>
#include <string>
using namespace std;
class st
{
string s;
public:
void reverseit(string s1)
{
for (int i = 0; i < s1.length() / 2; i++)
{
char c;
c = s1[i];
s1[i] = s1[s1.length() - i - 1];
s1[s1.length() - i - 1] = c;
}
s = s1;
}
void printdata()
{
cout << "Reversed String: " << s << endl;}
};
int main()
{
string s;
cout << "Enter string " << endl;
getline(cin, s);
st m;
m.reverseit(s);
m.printdata();
return 0;
}