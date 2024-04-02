#include<iostream>
#include<conio.h>
using namespace std;
void displaygrid();
void playerturn();
bool game_end();
int row,column;
bool draw= false;
char grid[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
int choice;

int main(){
	
	
 while(game_end()){
 	system("cls");
	displaygrid();
	playerturn();
	game_end();
}
if(turn=='X' && draw==false){
	cout<<"\tPlayer 2[O] wins! Congatulations.\n";
}
if(turn=='O' && draw==false){
	cout<<"\tPlayer 1[X] wins! Congatulations.\n";
}
else{
	cout<<"\tGame Draw!";
}


}

void displaygrid(){
	system("cls");
	cout<<"\n\t\tTIC-TAC-TOE GAME\n";
	cout<<"\n   Player 1[X]\n";
	cout<<"   Player 2[O]\n";
	cout<<"\t\t   |   |   "<<endl;
	cout<<"\t\t "<<grid[0][0]<<" | "<<grid[0][1]<<" | "<<grid[0][2]<<" "<<endl;
	cout<<"\t\t___|___|___"<<endl;
	cout<<"\t\t   |   |   "<<endl;
	cout<<"\t\t "<<grid[1][0]<<" | "<<grid[1][1]<<" | "<<grid[1][2]<<" "<<endl;
	cout<<"\t\t___|___|___"<<endl;
	cout<<"\t\t   |   |   "<<endl;
	cout<<"\t\t "<<grid[2][0]<<" | "<<grid[2][1]<<" | "<<grid[2][2]<<" "<<endl;
	cout<<"\t\t   |   |   "<<endl;
	
}


void playerturn(){
	    int choice;
	    cout<<"\tEnter position from (1-9)\n";
	    if(turn=='X'){
	    	cout<<"\n\tPlayer 1[X] turn:";
		}
	    if(turn=='O'){
	    	cout<<"\n\tPlayer 2[O] turn:";
		}
		
	    cin>>choice;
	
		switch(choice){
		case 1:
			row=0;
			column=0;
			break;
		case 2:
			row=0;
			column=1;
			break;
		case 3:
			row=0;
			column=2;
			break;
		case 4:
			row=1;
			column=0;
			break;
		case 5:
			row=1;
			column=1;
			break;
		case 6:
			row=1;
			column=2;
			break;
		case 7:
			row=2;
			column=0;
			break;
		case 8:
			row=2;
			column=1;
			break;
	    case 9:
			row=2;
			column=2;
			break;
		default:
			cout<<"Invalid choice!";
			break;	
	}
	if(turn=='X'&&grid[row][column]!='X'&&grid[row][column]!='O'){
    	grid[row][column]='X';
     	turn='O';
	}
	else if(turn=='O'&&grid[row][column]!='X'&&grid[row][column]!='O'){
		grid[row][column]='O';
     	turn='X';
	}
	else{
		cout<<"Box already filled!\n";
		cout<<"Please Try Again.\n";
		playerturn();
	}
	displaygrid();
}
	
	bool game_end(){
		for(int i=0;i<3;i++){
			if(grid[i][0]==grid[i][1]&&grid[i][0]==grid[i][2] || grid[0][i]==grid[1][i]&&grid[0][i]==grid[2][i])
				return false;
		}
		for(int i=0;i<3;i++){
		   for(int j=0;j<3;j++){
		   if(grid[i][j]!='X' &&grid[i][j]!='O'){
		   return true;
    	}
	}
}
		
		if(grid[0][0]==grid[1][1]&&grid[0][0]==grid[2][2] || grid[0][2]==grid[1][1]&&grid[0][2]==grid[2][0]){		
		return false;
	}
		draw=true;
		return false;
}
			
		
	
                                                    
      
                                            
