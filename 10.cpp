// Declare a class cont with a integer static data member cnt to store the number of objects active, a
// constructor function to increment cnt, a destructor function to decrement cnt, and a static function
// showcnt() to display the value of cnt at that instance.

#include<iostream>
#include<conio.h>
using namespace std;
class cont
{
static int cnt;
public:
cont()
{
    cnt++;
    cout<<"Constructor called Object "<<cnt<<" Created"<<endl;
}
~cont()
{
    cout<<"Destructor called Object "<<cnt<<" Destroyed"<<endl;
    cnt--;
}
static void showcnt()
{
    cout<<"Current Count "<<cnt<<endl;
}
};
int cont::cnt;
int main()
{
    cont c1;
    c1.showcnt();
    cont c2,c3;
    c2.showcnt();
    c3.showcnt();
    cont c4,c5;
    c4.showcnt();
    c5.showcnt();
    getch();
    return 0;
}