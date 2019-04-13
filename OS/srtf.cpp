#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,bt[10],st[10],et[10],wt[10],temp,tt;
float avg;
printf("Enter the No. of processes:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nEnter burst time for process %d:\n",i);
scanf("%d",&bt[i]);
}
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(bt[i]>bt[j])
{
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
}
}
if(i==1)
{
st[1]=0;
et[1]=bt[1];
wt[1]=0;
}
else
{
st[i]=et[i-1];
et[i]=st[i]+bt[i];
wt[i]=st[i];
}
}
printf("\n\n BT \t ST \t ET \t WT\n");
for(i=1;i<=n;i++)
{
printf("\n %d\t %d\t %d\t %d",bt[i],st[i],et[i],wt[i]);
}
for(i=1,tt=0;i<=n;i++)
tt+=wt[i];
avg=(float)tt/n;
printf("\n Avg Waiting Time=%f",avg);
for(i=1,tt=0;i<=n;i++)
tt+=et[i];
avg=(float)tt/n;
printf("\n Avg Turn Around Time=%f",avg);
for(i=1,tt=0;i<=n;i++)
tt+=st[i];
avg=(float)tt/n;
printf("\n Avg Response Time=%f\n\n",avg);
getch();
}
