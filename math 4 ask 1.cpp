#include <iostream>
using namespace std;

void swap(int &x,int &y);
int main ()
{	
	int x=9;
	int y=5;
	swap(x,y);
	cout<<x<<","<<y;
	return 0;
}

void swap(int &x,int &y)
{
	int p;
	p=x;
	x=y;
	y=p;	
}
