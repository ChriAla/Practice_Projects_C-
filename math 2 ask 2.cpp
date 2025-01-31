#include <iostream>
using namespace std;

class shmeio{
		double x,y;
	public:
		shmeio();
		shmeio(double in_x,double in_y);
		void set_x(double in_x);
		void set_y(double in_y);
		double get_x()const;
		double get_y()const;
		void print();
};


int main()
{
	shmeio a1;
	shmeio a2(2.3,4.4);
	shmeio a3(5.1,6.6);
	a1.print();
	a2.print();
	a3.print();
	return 0;
}

shmeio::shmeio()
{
	x=0.0;
	y=0.0;
}
shmeio::shmeio(double in_x,double in_y)
{
	x=in_x;
	y=in_y;
}
void shmeio::set_x(double in_x)
{
	x=in_x;
}
void shmeio::set_y(double in_y)
{
	y=in_y;
}
double shmeio::get_x()const
{
	return x;
}
double shmeio::get_y()const
{
	return y;
}
void shmeio::print()
{
	cout<<"("<<x<<","<<y<<")";
}
