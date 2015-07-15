/*
 * Rock, Paper, Scissors, Lizard, Spock
 *
 * Rock beats scissors and lizard.
 * Paper beats rock and Spock.
 * Scissors beats paper and lizard.
 * Lizard beats paper and Spock
 * Spock beats rock and scissors
 *
 * Difficulty:
 * 1	Easy			The computer guesses randomly
 * 2	Hard			The computer gets two tries
 * 3	Impossible	The computer has a 100% chance of winning.
 *
 * It's impossible, right?gj
 */


#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

void toLowercase(string &text) {
	for(int i=0, len = text.length(); i<len; ++i) {
		if(text[i] <= 90) {
			text[i] = text[i]+32;
		}
	}
}

int getDifficulty() {
	cout << "What difficulty would you like to play?" << endl;
	cout << "Easy, hard, or impossible?" << endl;
	string text;
	cin >> text;
	toLowercase(text);
	if(text == "easy") {
		return 1;
	}
	else if(text == "hard") {
		return 2;
	}
	else if(text == "impossible") {
		return 3;
	}
	else {
		return 999;
	}
}
int getUserChoice() {
	cout << "What do you playg?" << endl;
	cout << "Rock, paper, scissors, lizard, or Spock?" << endl;
	string text;
	cin >> text;
	toLowercase(text);
	if(text == "rock") {
		return 1;
	}
	else if(text == "paper") {
		return 2;
	}
	else if(text == "scissors") {
		return 3;
	}
	else if(text == "lizard") {
		return 4;
	}
	else if(text == "spock") {
		return 5;
	}
	else {
		return 999;
	}
}
bool willCompWin(int compChoice, int userChoice) {
	switch(compChoice) {
		case 1:
			if(userChoice == 1 || userChoice == 2 || userChoice == 5) {
				return false;
			}
			else {
				return true;
			}
			break;
		case 2:
			if(userChoice == 2 || userChoice == 3 || userChoice == 4) {
				return false;
			}
			else {
				return true;
			}
			break;
		case 3:
			if(userChoice == 1 || userChoice == 3 || userChoice == 5) {
				return false;
			}
			else {
				return true;
			}
			break;
		case 4:
			if(userChoice == 1 || userChoice == 3 || userChoice == 4) {
				return false;
			}
			else {
				return true;
			}
			break;
		case 5:
			if(userChoice == 2 || userChoice == 4 || userChoice == 5) {
				return false;
			}
			else {
				return true;
			}
			break;
	}
}
int getCompChoice(int userChoice, int difficulty) {
	srand(time(NULL));
	if(difficulty == 1) {
		return rand() % 5 + 1;
	}
	else if(difficulty == 2) {
		int tempChoice = rand() % 5 + 1;
		cout << tempChoice << endl;
		if(!willCompWin(tempChoice, userChoice)) {
			tempChoice = rand() % 5 + 1;
			cout << tempChoice << endl;
		}
		return tempChoice;
	}
	else if(difficulty == 3) {
		int tempChoice = rand() % 5 + 1;
		cout << tempChoice << endl;
		while(!willCompWin(tempChoice, userChoice)) {
			tempChoice = rand() % 5 + 1;
			cout << tempChoice << endl;
		}
		return tempChoice;
	}
}
bool tied(int userChoice, int compChoice) {
	if(userChoice == compChoice) {
		return true;
	}
	else {
		return false;
	}
}
void endingMessage(int winner, int loser) {
	switch(winner) {
		case 1:
			if(loser == 3) {
				cout << "Rock crushes scissors." << endl;
			}
			else {
				cout << "Rock crushes lizard." << endl;
			}
			break;
		case 2:
			if(loser == 1) {
				cout << "Paper covers rock." << endl;
			}
			else {
				cout << "Paper disproves Spock." << endl;
			}
			break;
		case 3:
			if(loser == 2) {
				cout << "Scissors cut paper." << endl;
			}
			else {
				cout << "Scissors decapitate lizard." << endl;
			}
			break;
		case 4:
			if(loser == 2) {
				cout << "Lizard eats paper." << endl;
			}
			else {
				cout << "Lizard poisons Spock." << endl;
			}
			break;
		case 5:
			if(loser == 1) {
				cout << "Spock vaporizes rock." << endl;
			}
			else {
				cout << "Spock smashes scissors." << endl;
			}
	}
}
void playGame() {
	int difficulty = getDifficulty();
	cout << "You chose to play on difficulty level " << difficulty << "." << endl;
	cout << endl;
	int userChoice = getUserChoice();
	cout << "You played " << userChoice << "." << endl;
	cout << endl;
	int compChoice = getCompChoice(userChoice, difficulty);
	cout << "The computer played " << compChoice << "." << endl;
	cout << endl;
	if(tied(userChoice, compChoice)) {
		cout << "It's a tie!" << endl;
	}
	else if(willCompWin(compChoice, userChoice)) {
		cout << "The computer wins!" << endl;
		endingMessage(compChoice, userChoice);
	}
	else {
		cout << "You win!" << endl;
		endingMessage(userChoice, compChoice);
	}
	cout << "Play again? yes/no" << endl;
	string playAgain;
	cin >> playAgain;
	toLowercase(playAgain);
	if(playAgain == "yes") {
		playGame();
	}
}

int main() {
	playGame();
}
