#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int t;
int atat=0,awt=0;
cout<<"Enter the number of processes: ";
cin>>t;
int sno[t],at[t],bt[t],ct[t],tat[t],wt[t];
for(int i=0;i<t;i++)
{
ct[i]=0;
tat[i]=0;
wt[i]=0;
}
for(int i=0;i<t;i++)
{
cout<<"Enter the following for process "<<i+1<<"..."<<endl;
cout<<"Arrival time: ";
cin>>at[i];
cout<<"Burst time: ";
cin>>bt[i];
}
ct[0]=at[0]+bt[0];
for(int i=1;i<t;i++)
{
if(ct[i-1]>at[i])
ct[i]=ct[i-1]+bt[i];
else
ct[i]=at[i]+bt[i];
}
for(int i=0;i<t;i++)
{
tat[i]=ct[i]-at[i];
atat+=tat[i];
wt[i]=tat[i]-bt[i];
awt+=wt[i];
}
cout<<endl;
cout<<"S.No. ";
for(int i=0;i<t;i++)
cout<<i+1<<" ";
cout<<endl;
cout<<"AT ";
for(int i=0;i<t;i++)
cout<<at[i]<<" ";
cout<<endl;
cout<<"BT ";
for(int i=0;i<t;i++)
cout<<bt[i]<<" ";
cout<<endl;
cout<<"CT ";
for(int i=0;i<t;i++)
cout<<ct[i]<<" ";
cout<<endl;
cout<<"TAT ";
for(int i=0;i<t;i++)
cout<<tat[i]<<" ";
cout<<endl;
cout<<"WT ";
for(int i=0;i<t;i++)
cout<<wt[i]<<" ";
cout<<endl<<endl;
cout<<"Average turn around time: "<<(float)atat/t<<endl;
cout<<"Average waiting time: "<<(float)awt/t<<endl;
}