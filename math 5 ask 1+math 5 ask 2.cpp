#include <iostream>
using namespace std;

#define N 3

class tictactoe{
		char array[N][N];	
	public:
		tictactoe();
		bool play(int x,int y,char c);
		char check_win();
		void print();
};

int main()
{
	tictactoe t;
	int x,y,step=0;
	char p='X';
	while(true)
	{
		cout<<"--------------------------"<<endl;
		t.print();
		cout<<endl<<"einai h seira toy "<<p<<endl;
		
		cout<<"dwse x syntetagmenh:";
		cin>>x;
		cout<<endl<<"dwse y syntetagmenh:";
		cin>>y;
		if(!t.play(x,y,p))
		{
			cout<<"lathos kinhsh";
			continue;
		}else
			step++;
		if(t.check_win()!='-')
		{
			cout<<"nikhse o "<<t.check_win();
			break;
		}
		else if(step==9)
		{
			cout<<"isopalia";
			break;
		}
		
		if(p=='X')
			p='O';
		else p='X';
	}
	return 0;
}

tictactoe::tictactoe()
{
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
		array[i][j]='-';
}
bool tictactoe::play(int x,int y,char c)
{
	if(array[x][y]=='-')
	{
		if(c=='X' || c=='O')
		{
		array[x][y]=c;
		return true;
		}
	}
	else 
		return false;
}
char tictactoe::check_win()
{
	int i,j;
	for(i=0; i<N; i++)
	{
	if(array[i][0]==array[i][1] && array[i][1]==array[i][2])
		return array[i][1];
	}
	for(j=0; j<N; j++)
	{
	if(array[0][j]==array[1][j] && array[1][j]==array[2][j])
		return array[1][j]; 
	}
	if(array[0][0]==array[1][1] && array[1][1]==array[2][2])
		return array[1][1]; 
	if(array[0][2]==array[1][1] && array[1][1]==array[2][0])
		return array[1][1];
	else 
		return '-';
}
void tictactoe::print()
{	
	int i,j;
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			cout<<array[i][j];
		cout<<endl;
	}
}
