#include<iostream>
#include<conio.h>
using namespace std;
//#include<conio.h>
	char sqr[10] = {'0','1','2','3','4','5','6','7','8','9'};
	int checkwin();
	void board();
int main()
{
	int player =1,i,choice,conti;
	char mark,name1[10],name2[10];
	cout<<"Enter player-1 name:: ";
	cin>>name1;
	cout<<"Enter name of player-2";
	cin>>name2;
	do
	{
	do
	{	system("cls");
		board();
		player=(player%2)?1:2;
		cout<<" Player "<<player<", Enter a number\n";
		cin>>choice;
		mark=(player ==1)?'X' : 'O';
		if(choice==1 &&sqr[1]=='1')
			sqr[1]=mark;
		else if(choice==2&&sqr[2]=='2')
			sqr[2]=mark;
		else if(choice==3&&sqr[3]=='3')
			sqr[3]=mark;
		else if(choice==4&&sqr[4]=='4')
			sqr[4]=mark;
		else if(choice==5&&sqr[5]=='5')
			sqr[5]=mark;
		else if(choice==6&&sqr[6]=='6')
			sqr[6]=mark;
		else if(choice==7&&sqr[7]=='7')
			sqr[7]=mark;
		else if(choice==8&&sqr[8]=='8')
			sqr[8]=mark;
		else if(choice==9&&sqr[9]=='9')
			sqr[9]=mark;
		else
		{
			cout<<"Invalid move";
			player--;
		}
		i=checkwin();
		player++;
	}while(i==-1);
	board();
	if(i==1)
		cout<<"==>\aPlayer "<<--player<<" "<<name1<<" "<<"win";
	else
		cout<<"==>\aGame draw";
	cout<<"Do you want to continue\n";
	cout<<"Press 1 for continue 0 for exit\n";
	cin>>conti;
	for(int h=1;h<=9;h++)
		sqr[h]=h;
	}
	while(conti==1);
	return(0);	
}
//Function to return game status
//1 for game is over with result
//0 for game is over with no result
//-1 for game is i progress
int checkwin()
{
	if(sqr[1]==sqr[2]&&sqr[2]==sqr[3])
		return 1;
	else if(sqr[4]==sqr[5]&&sqr[5]==sqr[6])
		return 1;
	else if(sqr[7]==sqr[8]&&sqr[8]==sqr[9])
		return 1;
	else if(sqr[1]==sqr[4]&&sqr[4]==sqr[7])
		return 1;
	else if(sqr[2]==sqr[5]&&sqr[5]==sqr[8])
		return 1;
	else if(sqr[3]==sqr[6]&&sqr[6]==sqr[9])
		return 1;
	else if(sqr[1]==sqr[5]&&sqr[5]==sqr[9])
		return 1;
	else if(sqr[3]==sqr[5]&&sqr[5]==sqr[7])
		return 1;
	else if(sqr[1]!='1'&&sqr[2]!='2'&&sqr[3]!='3'&&sqr[4]!='4'&&sqr[5]!='5'&&sqr[6]!='6'&&sqr[7]!='7'&&sqr[8]!='8'&&sqr[9]!='9')
		return(0);
	else
		return -1;
}
/*Function to draw board of tic tac toe with players marks*/
void board()
{
	//clrscr();
	cout<<"\n\n\tTIC TAC TOE\n\n";
	cout<<"Player 1 (x)  -  Player 2 (0) \n\n\n";
	cout<<"     |      |      \n";
	cout<<"  "<<sqr[1]<<"  |  "<<sqr[2]<<"   |  "<<sqr[3]<<endl;
	cout<<"_____|______|______\n";
	cout<<"     |      |      \n";
	cout<<"  "<<sqr[4]<<"  |  "<<sqr[5]<<"   |  "<<sqr[6]<<endl;
	cout<<"_____|______|______\n";
	cout<<"     |      |      \n";
	cout<<"  "<<sqr[7]<<"  |  "<<sqr[8]<<"   |  "<<sqr[9]<<endl;
}
