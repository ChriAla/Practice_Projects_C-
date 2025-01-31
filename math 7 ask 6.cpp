#include <iostream>
#include <cstdlib>
using namespace std;

class point{
		int x,y;
	public:
		point(int in_x ,int in_y);
		void set_x(int in_x);
		void set_y(int in_y);
		int get_x()const;
		int get_y()const;
		friend ostream &operator<<(ostream &left,const point &right);
};
class board{
		int N;
		char **p;
	public:
		board(int in_N);
		board(const board &ob);
		char get_elem(int i,int j);
		~board();
		board &operator=(const board &ob);
		friend ostream &operator<<(ostream &left,const board &right);
};

int main()
{
	point t(3,4);
	
	board b(40);
	cout<<b;
	return 0;
}
point::point(int in_x,int in_y)
{
	if(in_x>=0 && in_x<=59)
		x=in_x;
	else 
	{
		cout<<"lathos timi";
		x=0;
	}
	if(in_y>=0 && in_y<=59)
		y=in_y;
	else 
	{
		cout<<"lathos timi";
		y=0;
	}
}
void point::set_x(int in_x)
{
	x=in_x;
}
void point::set_y(int in_y)
{
	y=in_y;
}
int point::get_x()const
{
	return x;
}
int point::get_y()const
{
	return y;
}
ostream &operator<<(ostream &left,const point &right)
{
	left<<"("<<right.x<<","<<right.y<<")";
	return left;
}
board::board(int in_N)
{
	N=in_N;
	p=new char*[N];
		if(!p) 
		{
			cout<<"error allocating memory!";
			exit(0);
		}
	int i,j;
	for (i=0; i<N; i++)
	{
		p[i]=new char[N];
		if(!p[i]) 
		{
			cout<<"error allocating memory!";
			exit(0);
		}
	}
	for (i=0; i<N; i++)
		for(j=0; j<N; j++)
			p[i][j]='.';
}
board::board(const board &ob)
{
	int i,j;
	N=ob.N;
	p=new char*[N];
		if(!p) 
		{
			cout<<"error allocating memory!";
			exit(0);
		}

	for (i=0; i<N; i++)
	{
		p[i]=new char[N];
		if(!p[i]) 
		{
			cout<<"error allocating memory!";
			exit(0);
		}
	}
	for (i=0; i<N; i++)
		for(j=0; j<N; j++)
			p[i][j]=ob.p[i][j];
}
char board::get_elem(int i,int j)
{
	return p[i][j];
}
board::~board()
{
	int j,i;
	for(j=0; j<N; j++)
		delete []p[i]; 
	delete p;
}
board &board::operator=(const board &ob)
{
	int j,i;
	if(p!=NULL)
	{
		for(j=0; j<N; j++)
			delete []p[i]; 
		delete p;
	}
	N=ob.N;
	p=new char*[N];
		if(!p) 
		{
			cout<<"error allocating memory!";
			exit(0);
		}

	for (i=0; i<N; i++)
	{
		p[i]=new char[N];
		if(!p[i]) 
		{
			cout<<"error allocating memory!";
			exit(0);
		}
	}
	for (i=0; i<N; i++)
		for(j=0; j<N; j++)
			p[i][j]=ob.p[i][j];
}
ostream &operator<<(ostream &left,const board &right)
{
	int i,j;
	for(i=right.N-1; i>=0; i--)
	{
		for(j=0; j<right.N; j++)
			left<<right.p[i][j]<<" ";
		left<<endl;
	}
	return left;
}
