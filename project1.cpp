//PROJECT 1 - NUMBER GUESSING GAME

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	cout<<"\n";
	cout<<"!!____GUESS THE NUMBER GAME____!!\n\n";

	int number, guess, tries = 0;
	srand(time(0)); //seed random number generator
	number = rand() % 100 + 1; // random number between 1 and 100
	

	do
	{
		cout<< "Enter a guess between 1 and 100 : ";
		cin>> guess;
		tries++;

		if (guess > number){
			cout<<"Oops! Number is too high :(\n";
			cout<<"Try Again!!\n\n";
		}
		else if (guess < number){
			cout<<"Oops! Number is too low :(\n";
			cout<<"Try Again!!\n\n";
		}
		else{
			cout<<"\nYayy! you got it :)\n\n";
			cout<<"You guessed it in " << tries << " guesses!!\n\n";
			cout<<"\n !!___THE GAME IS OVER___!! \n\n";
			cout<<"!!___THANKS FOR PLAYING :)___!!\n";
			cout<<"\n";
		} 
	}
	while (guess != number);
	return 0;
	
}

