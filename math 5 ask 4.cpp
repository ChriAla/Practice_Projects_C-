#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class demigorgon {
		int height;
		int weight;
		int health;
	public:
		demigorgon();
		int attack();
};
class demidog {
		int health;
	public:
		demidog();	
		int attack();
};
class hive {
		demigorgon *demi_ptr;
		demidog *array_demidogs;
		int n_demidogs;
	public:
		hive(bool in_demigorgon);
		int attack();
};

int main()
{
	hive h(true);
	int damage;
	damage=h.attack();
	cout<<endl<<"total damage:"<<damage;
	return 0;
}

demigorgon::demigorgon()
{
	height=5;
	weight=500;
	health=10000;
}
int demigorgon::attack()
{
	srand(time(NULL));
	return 300+rand()%201;
}
demidog::demidog()
{
	health=100;
}
int demidog::attack()
{
	return 10+rand()%21;
}
hive::hive(bool in_demigorgon)
{
	if(in_demigorgon)
	{
		demi_ptr=new demigorgon;
		if(!demi_ptr) cout<<"error allocating memory!";
	}	
	else 
		demi_ptr=NULL;	
	
	n_demidogs=10+rand()%41;
	
	array_demidogs = new demidog [n_demidogs];
	if(!array_demidogs) cout<<"error allocating memory!";
}
int hive::attack()
{
	int damage;
	int sum=0;
	if(demi_ptr!=NULL)
	{
		damage=demi_ptr->attack();
		sum+=damage;
		cout<<"Demigorgon attacks ("<<damage<<")"<<endl;
	}
	for(int i=0; i<n_demidogs; i++)
	{
		damage=array_demidogs[i].attack();
		sum+=damage;
		cout<<"Demidog "<<i<<" attacks("<<damage<<")"<<endl;
	}
	return sum;

}
