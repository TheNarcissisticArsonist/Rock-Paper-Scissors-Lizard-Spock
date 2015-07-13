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

string getDifficulty() {
	//Ask the user to specify difficulty level
	string difficulty = "";
	cout << "What difficulty level would you like?" << endl;
	cout << "Easy, Hard, or Impossible?" << endl;
	cin >> difficulty;
	while((difficulty != "Easy") && (difficulty != "Hard") && (difficulty != "Impossible")) {
		cout << "That's not valid! Please make sure you spelled the difficulty right and capitalized the first letter only." << endl;
		cin >> difficulty;
	}
	cout << "You chose: " << difficulty << "." << endl;
	return difficulty;
}
string getUserChoice() {
	string userChoice = "";
	cout << "Rock, Paper, Scissors, Lizard, or Spock?" << endl;
	cin >> userChoice;
	while((userChoice != "Rock") && (userChoice != "Paper") && (userChoice != "Scissors") && (userChoice != "Lizard") && (userChoice != "Spock")) {
		cout << "That's not valid! Please make sure you spelled the choice right and capitalized the first letter only." << endl;
		cin >> userChoice;
	}
	cout << "You chose: " << userChoice << "." << endl;
	return userChoice;
}

int main() {
	string difficulty = getDifficulty();
	cout << endl << endl;
	string userChoice = getUserChoice();
}
