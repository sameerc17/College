// Write a program to find the number of unique elements in two randomly generated arrays and find the time taken in executing the program.

#include<stdio.h>
#include<stdlib.h> //for accessing rand() function
#include<time.h> //for calculating time complexity
void main()
{
int x[1000],y[1000],n,i,j,count=0,flag=0,temp;      // array sizes are equal to input size
clock_t start,end;
double cpu_time_used;
n=1000;                                 // input size can be varied to study time complexity
for(i=0;i<n;i++)
{
x[i]=rand()%1000;                       // random generation of values
y[i]=rand()%1500;                       // random generation of values
}
for(i=0;i<n;i++)
{
printf("%d ",x[i]);

}
printf("\n");
for(i=0;i<n;i++)
{
printf("%d ",y[i]);
}
printf("\n");
start=clock();
for(i=0;i<n;i++)
{
temp=0;
for(j=0;j<n;j++)
{
if(y[i]==y[j])
temp++;
}
if(temp==1)
{
flag=0;
for(j=0;j<n;j++)
{
if(y[i]==x[j])
{
flag=1;
break;
}
}
if(!flag)
count++;
}
}
end=clock();
cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
printf("%d\n",count);                   //prints number of unique elements
printf("%f\n",cpu_time_used);           //prints the time required 
}