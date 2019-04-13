#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,t,t1,x,n,a[10],bt[10],time,wt[10],tt[10];
float twt,ttt;
printf("Enter number of processes: ");
scanf("%d",&n);
for(i = 0;i < n;i++)
{
printf("Enter arrival time for process %d :\n",i + 1);
scanf("%d",&a[i]);
printf("Enter burst time :\n");
scanf("%d",&bt[i]);
printf("\n");
}
for(i = 1;i < n;i++)
{
for(j = 2;j <= n - i;j++)
{
if(bt[j] < bt[j - 1])
{
t = a[j];
a[j] = a[j - 1];
a[j - 1] = t;
t = bt[j];
bt[j] = bt[j - 1];
bt[j - 1] = t;
}
}
}
printf("\nArr\t BT \tWT \tTT\t TC\n");
time = a[0];
twt = 0;
ttt = 0;
for(i = 0;i < n;i++)
{
if(time >= a[i])
{
wt[i] = time - a[i];
time += bt[i];
tt[i] = bt[i] + wt[i];
}
else
{
x = i;
for(j = i + 1;j < n;j++)
{
if(time >= a[j])
{
x = j;
break;
}
else if(a[j] < a[x])
{
x = j;
}
}
t = a[x];
t1 = bt[x];
for(j = x;j > i;j--)
{
a[j] = a[j - 1];
bt[j] = bt[j - 1];
}
a[i] = t;
bt[i] = t1;
if(time >= a[i])
{
wt[i] = time - a[i];
time += bt[i];
tt[i] = bt[i] + wt[i];
}
else
{
time = a[i] + bt[i];
wt[i] = 0;
tt[i] = bt[i];
}
}
twt += wt[i];
ttt += tt[i];
printf(" %d \t %d \t %d \t
%d
%d\n",a[i],bt[i],wt[i],tt[i],time);
}
printf("\nAverage waiting time: %f",twt / n);
printf("\nAverage turnaround time: %f\n\n",ttt / n);
getch();
return 0;
}
