#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
using namespace std;
int main()
{
int c=0,w=0,l= 0;
FILE *fr;
char fname[20], ch;
cout << "\n Enter Source File Name : ";
gets(fname);
fr = fopen(fname, "r");
if (fr == NULL)
{
cout << "\n Invalid File Name. \n No such File or Directory ";
exit(0);
}
ch = fgetc(fr);
while (ch != EOF)
{
if (ch != ' ' && ch != '\n')
c++;
if (ch == ' ')
w++;if (ch == '\n')
{
l++;
w++;
}
ch = fgetc(fr);
}
fclose(fr);
cout << "\n Total No. of Characters : " <<c;
cout << "\n Total No. of Words : " <<w;
cout << "\n Total No. of Lines : " <<l;
return 0;
}