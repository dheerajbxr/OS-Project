#include <stdio.h>
#include <conio.h>
struct pro
{
int id,brustTime;
};
struct pro Process[100];

void main() 
{
    int n;
    printf("Enter no of Process : "); 
    scanf("%d",&n);
    int totTime = 0;
    for(int i=0;i<n;i++){
        printf("Enter Brust Time for Process %d : ",i+1); 
		scanf("%d",&Process[i].brustTime);
        Process[i].id = (i+1);
        totTime += Process[i].brustTime;
    }
}
