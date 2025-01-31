#include <iostream>
using namespace std;

#define N 3

class tictactoe{
		char array[N][N];	
		char player;
	public:
		tictactoe();
		bool play(int x,int y);
		char check_win();
		void print();
		void next_player();
		char get_player()const;
};

int main()
{
	tictactoe t;
	int x,y,step=0;
	while(true)
	{
		cout<<"--------------------------"<<endl;
		t.print();
		cout<<endl<<"einai h seira toy "<<t.get_player()<<endl;
		
		cout<<"dwse x syntetagmenh:";
		cin>>x;
		cout<<endl<<"dwse y syntetagmenh:";
		cin>>y;
		if(!t.play(x,y))
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
		
		t.next_player();
	}
	return 0;
}

tictactoe::tictactoe()
{
	int i,j;
	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
			array[i][j]='-';
	player='X';		
}
bool tictactoe::play(int x,int y)
{
	if(array[x][y]=='-')
	{
		if(player=='X' || player=='O')
		{
		array[x][y]=player;
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
void tictactoe::next_player()
{
	if(player=='X')
			player='O';
		else player='X';
}
char tictactoe::get_player()const
{
	return player;
}
