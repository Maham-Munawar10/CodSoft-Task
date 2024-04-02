#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	int RandomNo,guess,chances=0;
	srand(time(0));
	RandomNo= rand()%100+1;
	cout<<"\t\t\t WELCOME TO NUMBER GUESSING GAME!\n";
	
	do{
	cout<<"\n Guess a number between 1 and 100: ";
	cin>>guess;
	chances++;
	
	 if(guess>RandomNo){
		cout<<"Your guess number "<< guess <<" is too high.\n";
		cout<<"Try again!\n";
	}
	else if(guess<RandomNo){
		cout<<"Your guess number "<< guess <<" is too low.\n";
		cout<<"Try again!\n";
	}
	else{
		cout<<"Hurray! You won the game.\n";
	}
}
	while(guess!=RandomNo);
	return 0;
}
