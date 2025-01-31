#include <iostream>
using namespace std;

int fibonacci(int n);

int main()
{
	cout<<fibonacci(15);
	return 0;
}

int fibonacci(int n)
{
	static int calls=0;
	calls++;
	cout<<calls<<endl;
	if (n==1 || n==2)
		return 1;
	else if (n>2)
	 return fibonacci(n-1)+fibonacci(n-2);
}
