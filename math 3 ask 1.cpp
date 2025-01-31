#include <iostream>
using namespace std;

int main()
{
	int x=8;
	cout<<"x="<<x<< "  adress="<<&x;
	int *p;
	p=&x;
	cout<<endl<<"p="<<p<<"  adress="<<&p;
	cout<<endl<<"x="<<*p;
	int **pp;
	pp=&p;
	cout<<endl<<"pp="<<pp<<"  adress="<<&pp;
	cout<<endl<<"x="<<**pp;
	cout<<endl<<"p="<<*pp;
}
