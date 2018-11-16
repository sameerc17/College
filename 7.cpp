// Write a programme that create a binary file by reading the data from the student from the terminal.
// The data of each student consist of name and roll no.

#include<fstream>
#include<iostream>
using namespace std;
int main()
{
char data[100];
int rno;
cout << "Enter name" << endl;
cin>>data;
ofstream f("student.txt");
f << data;
f.close();
ofstream f1("student1.txt");
cout<<"Enter the rno:\n";
cin>>rno;
f1 << rno;
ifstream fs("student.txt");
fs >> data;
cout << "Name: "<<data<<endl;
fs.close();
ifstream f3("student1.txt");
f3 >>rno;
cout<<"Rno:"<<rno<<endl;
f3.close();}