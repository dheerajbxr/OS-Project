#include <stdio.h>
#include <conio.h>
struct pro
{
int id,brustTime;
};
struct pro Process[100];
void sort(int n)
{
    for(int i=0;i<n-1;i++)
	{
        for(int j=0;j<n-i-1;j++){
            if(Process[j].brustTime > Process[j+1].brustTime){
                struct pro temp = Process[j];
                Process[j] = Process[j+1];
                Process[j+1]= temp;
            }
        }
    }
}
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
sort(n); 	
    printf("\n");
    printf("|");
for(int i=0;i<n;i++){
        for(int j=0;j<Process[i].brustTime-1;j++)
            printf("-");
        printf("|");
    }  
    
    printf("\n");
    for(int i=0;i<totTime+1;i++)
        printf("-");
	
}

