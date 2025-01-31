#include<iostream>
using namespace std;

#define N 5

int main()
{
	int i;
	int A[N]={10,5,2,6,1};
	int x=7;
	bool found;
	
	found=false;
	for(i=0; i<N; i++)
	{
		if (A[i]==x)
		{
			found=true;
			break;
		}
	}
	if (found)
		cout<<"to "<<x<<" brethike sthn thesi "<<i;
	else
		cout<<"to "<<x<<" den brethike";
	return 0;
}
