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
	string myChoice;
	cin >> myChoice;
	toLowercase(myChoice);
	if(myChoice == "easy") {
		return 1;
	}
	else if(myChoice == "hard") {
		return 2;
	}
	else if(myChoice == "impossible") {
		return 3;
	}
	else {
		return 999;
	}
}

int main() {
	int difficulty = getDifficulty();
	cout << "You chose to play on difficulty level " << difficulty << "." << endl;
	cout << endl;
	//int myChoice = getUserChoice();
	cout << endl;
	//int compChoice = getCompChoice(myChoice, difficulty);
	cout << endl;
}
