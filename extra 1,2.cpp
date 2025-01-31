#include <stdio.h>

void grammi();

int main()
{	
	int sec,x,y,z;
	printf("dwse plithos deyterolepton:");
	scanf("%d",&sec);
	x=sec/3600;
	y=(sec%3600)/60;
	z=(sec%3600)%60;
	printf("wres:%d",x);
	printf("\nlepta:%d",y);
	printf("\ndeyterolepta:%d",z);
}
