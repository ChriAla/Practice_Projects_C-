#include <iostream>
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

int main()
{
	point t(3,4);
	cout<<t;
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
