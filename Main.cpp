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
 * Easy			The computer guesses randomly
 * Hard			The computer removes one of two losing options based on yours
 * Impossible	The computer has a 100% chance of winning.
 *
 * It's impossible, right?gj
 */


#include <iostream>
#include <stdio.h>

using namespace std;

string compChoices[] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};

string toLowercase(string text) {
	for(int i=0; i<text.length(); i++) {
		if(text[i] < 91) {
			text[i] += 32;
		}
	}
	return text;
}

string getDifficulty() {
	//Ask the user to specify difficulty level
	string difficulty = "";
	cout << "What difficulty level would you like?" << endl;
	cout << "Easy, Hard, or Impossible?" << endl;
	cin >> difficulty;
	difficulty = toLowercase(difficulty);
	while((difficulty != "easy") && (difficulty != "hard") && (difficulty != "impossible")) {
		cout << "That's not valid! Please make sure you spelled the difficulty right." << endl;
		cin >> difficulty;
		difficulty = toLowercase(difficulty);
	}
	cout << "You chose: " << difficulty << "." << endl;
	return difficulty;
}
string getUserChoice() {
	string userChoice = "";
	cout << "Rock, paper, scissors, lizard, or Spock?" << endl;
	cin >> userChoice;
	userChoice = toLowercase(userChoice);
	while((userChoice != "rock") && (userChoice != "paper") && (userChoice != "scissors") && (userChoice != "lizard") && (userChoice != "spock")) {
		cout << "That's not valid! Please make sure you spelled the choice right." << endl;
		cin >> userChoice;
		userChoice = toLowercase(userChoice);
	}
	cout << "You chose: " << userChoice << "." << endl;
	return userChoice;
}

int main() {
	string difficulty = getDifficulty();
	cout << endl;
	string userChoice = getUserChoice();
	cout << endl;
}
