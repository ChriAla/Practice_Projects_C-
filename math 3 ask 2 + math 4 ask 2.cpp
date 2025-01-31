#include <iostream>
using namespace std;

class ARRAY{
		int *p;
		int n;
	public:
		ARRAY(int in_n);	
		~ARRAY();
		ARRAY(const ARRAY &ob);
		void set_i(int i,int val);
		int get_i()const;
		int get_n()const;
		void print();
};

int main()
{
	int i,n;
	n=10;
	ARRAY array(n);
	ARRAY array1=array;
	for(i=0; i<n; i++)
		array.set_i(i,i*i);
	array.print();
	cout<<endl;
	for(i=0; i<n; i++)
		array1.set_i(i,i*i*i);
	array1.print();
	return 0;
}

ARRAY::ARRAY(int in_n)
{
	n=in_n;
	p=new int [n];
		if(!p)
			cout<<"error allocating memory";
}
ARRAY::~ARRAY()
{
	delete [] p;
}
ARRAY::ARRAY(const ARRAY &ob)
{	
	n=ob.get_n();
	p=new int [n];
		if(!p) cout<<"memory allocating error";
}
void ARRAY::set_i(int i,int val)
{
	if(i>=0 && i<n)
		p[i]=val;
	else
		cout<<"error allocating memory";
}
int ARRAY::get_i()const 
{
	int i;
	if(i>=0 && i<n)
		return p[i];
	else
		cout<<"error allocating memory";
}
int ARRAY::get_n()const
{
	return n;
}
void ARRAY::print()
{
	int i;
	for(i=0; i<n; i++)
		cout<<p[i]<<" ";
}
