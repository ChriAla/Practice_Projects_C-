#include <iostream>
using namespace std;

int average (int x, int y);
double average (double t,double p);
int main()
{
	double t,p;
	int in;
	int x,y;
	cout<<"1-aekraioi 2-pragmatikoi"<<endl;
	cin>>in;
	if(in==1)
	{
		cout<<"dwse ton prwto akeraio:";
		cin>>x;
		cout<<"dwse ton deytero akeraio:";
		cin>>y;
		cout<<average(x,y);
	}
	else
	{
		cout<<"dwse ton prwto pragmatiko:";
		cin>>t;
		cout<<"dwse ton deytero pragmatiko:";
		cin>>p;
		cout<<average(t,p);
	}
	
	
	return 0;
}

int average (int x, int y)
{
	return (x+y)/2;
}
double average (double t,double p)
{
	return (t+p)/2;
}
