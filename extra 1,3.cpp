#include <stdio.h>
#define SIZE 5
int main()
{
	int i,x,N;
	int pinakas[SIZE];
	double mo;
	do
	{
	printf("dwse ena arithmo:");
	scanf("%d",&N);
	}while(N<1 || N>20);
	
	for(i=0; i<N; i++)
	{	
		printf("dwse ton %d-o arithmo:",i+1);
		scanf("%d",&pinakas[i]);	
	}
	x=0;
	for(i=0; i<N; i++)
	{
		x=x+pinakas[i];
	}
	mo=x/(float)N;
printf("o M.O einai:%f",mo);
}
