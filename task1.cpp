#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int secretNumber=rand()%100+1;
	int guess;
	cout<<"the Number Guessing Game "<<endl;
	cout<<"Select a Number between 1 and 100 "<<endl;
	do{
			cout<<"Enter the Guess ";
			cin>>guess;
			if(guess<secretNumber){
				cout<<"too low try again  "<<endl;
			}
			else if(guess>secretNumber){
				cout<<"too high try again"<<endl;
			}
			else{
				cout<<"congratulation! you guessed the correct number ";
			}
		
			
	}
		while(guess != secretNumber);
		return 0;

}
