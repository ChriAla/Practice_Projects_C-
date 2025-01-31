#include <iostream>
#include <cstring>
using namespace std;

class wizard{
		int age;
		char beard[80];
		int mana;
	public:
		wizard(int in_age,char *in_beard,int in_mana);
		void fireball();
		void lightning();
		void wait();
};
int main()
{	
	char str[80]="grey";
	wizard gandalf(2019,str,100);
	
	gandalf.fireball();
	gandalf.wait();
	gandalf.lightning();
	gandalf.wait();
	gandalf.wait();
	gandalf.fireball();
	return 0;
}

wizard::wizard(int in_age,char *in_beard,int in_mana)
{
	age=in_age;
	strcpy(beard,in_beard);
	mana=in_mana;
}
void wizard::fireball()
{
	if (mana>=30)
	{
	mana-=30;
	cout<<endl<<"fireball(mana="<<mana<<")";
    }
    else
    cout<<endl<<"Not enough mana for fireball";
}
void wizard::lightning()
{
	if(mana>=90)
	{
	mana-=90;
	cout<<endl<<"lightning(mana="<<mana<<")";
	}
	else
	cout<<endl<<"Not enough mana for lightning";
}
void wizard::wait()
{
	if (mana<100)
	{
	mana+=10;
	cout<<endl<<"wait(mana="<<mana<<")";
	}
	else
	cout<<endl<<"mana is full";
}
