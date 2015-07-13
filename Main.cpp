#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	string difficulty = "";
	cout << "What difficulty level would you like?" << endl;
	cout << "Easy, Hard, or Impossible?" << endl;
	cin >> difficulty;
	while((difficulty != "Easy") && (difficulty != "Hard") && (difficulty != "Impossible")) {
		cout << "That's not valid! Please make sure you spelled the difficulty right and capitalized the first letter only." << endl;
		cin >> difficulty;
	}
	cout << difficulty << endl;
}
