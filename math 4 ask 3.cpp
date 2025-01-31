#include <iostream>
#include <cstring>
using namespace std;

class STRING{
		int length;
		char *str;
	public:
		STRING();
		STRING(char *in_str);
		STRING(const STRING &ob);
		~STRING();
		int get_length()const;
		char *get_str()const;
		void set_str(char *in_str);
		void print();
};
int main()
{	
	char s[80]="this is a string";
	STRING s1(s);
	STRING s2 =s1;
	s2.set_str("this is a new string");
	s1.print();
	cout<<endl;
	s2.print();
	return 0;
}

STRING::STRING()
{
	length=0;
	str=NULL;
}
STRING::STRING(char *in_str)
{	
	length=strlen(in_str);
	str=new char [length];
	if(!str) cout<<"memorey allocating error!";
	strcpy(str,in_str);
}
STRING::STRING(const STRING &ob)
{
	length=ob.get_length();
	str=new char [length];
	if(!str) cout<<"memorey allocating error!";
	strcpy(str,ob.get_str());
}
STRING::~STRING()
{
	delete str;
}
int STRING::get_length()const
{
	return length;
}
char *STRING::get_str()const
{
	return str;
}
void STRING::set_str(char *in_str)
{
	if(str!=NULL)
		delete str;
	length=strlen(in_str);
	str=new char [length];
	if(!str) cout<<"memorey allocating error!";
	strcpy(str,in_str);
	
	
	
}
void STRING::print()
{
	cout<<str;
}
