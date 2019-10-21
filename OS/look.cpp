#include<iostream>
using namespace std;
main()
{
int terminal;
int a[100];
int n;int i;
cout<<"Enter n: \n";
cin>>n;
cout<<"\nEnter addresses: \n";
for(int i=0; i<n ; i++)
{
cin>>a[i];
}
int temp=0;
// SORTING
for (i=0; i<n-1 ; i++)
{
for (int j=0; j<n-i-1 ; j++)
{
if (a[j] > a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}
int start=50;
int sum=0;
cout<<"\nEnter Start:";
cin>>start;
for (i=0; i<n-1 ; i++)
{
if(a[i]==start)
{
start=i;
break;
}
}
if(start-0<100-start)
{
for(i=start;i>0;i--)
{
sum=a[i]-a[i-1]+sum;
}
sum=sum+a[start+1]-a[0];
for(i=start+2;i<n;i++)
{
sum=a[i]-a[i-1]+sum;
}
}
else
{
for(i=start+1;i<n;i++)
{
sum=a[i]-a[i-1]+sum;
}
sum=sum+a[n-1]-a[start];
for(i=start;i>0;i--)
{
sum=a[i]-a[i-1]+sum;
}
}
cout<<"No. of switches = "<<sum<<endl;
}
