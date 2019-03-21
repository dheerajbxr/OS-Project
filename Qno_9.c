#include<stdio.h>
int main()
{
int i, limit, total = 0, x, counter = 0, time_quantum,j;
int wait_time = 0, turnaround_time = 0,pos,z,p[10],prio[10], a_time[10], b_time[10], temp[10],b;
float average_wait_time, average_turnaround_time;
printf("\nEnter Total Number of Processes:");
scanf("%d", &limit);
x = limit;
for(i = 0; i < limit; i++)
{
p[i]=i+1;
prio[i]=0;
printf("\nEnter total Details of Process[%d]\n", i + 1);
printf("Arrival Time:\t");
scanf("%d", &a_time[i]);
printf("Burst Time:\t");
scanf("%d", &b_time[i]);
temp[i] = b_time[i];
}
printf("\nEnter the Time Quantum:");
scanf("%d", &time_quantum);
}
