#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  string userChoice;
  string computerChoice;
  int randomNumber;
  
  srand(time(0));
  randomNumber = rand() % 3 + 1;
  
  cout << "Rock, paper, or scissors?" << endl;
  cin >> userChoice;
  
  if (randomNumber == 1) {
    computerChoice = "rock";
  } else if (randomNumber == 2) {
    computerChoice = "paper";
  } else {
    computerChoice = "scissors";
  }
  
  cout << "The computer chose " << computerChoice << "." << endl;
  
  if (userChoice == computerChoice) {
    cout << "It's a tie!" << endl;
  } else if (userChoice == "rock") {
    if (computerChoice == "scissors") {
      cout << "You win!" << endl;
    } else {
      cout << "The computer wins." << endl;
    }
  } else if (userChoice == "paper") {
    if (computerChoice == "rock") {
      cout << "You win!" << endl;
    } else {
      cout << "The computer wins." << endl;
    }
  } else if (userChoice == "scissors") {
    if (computerChoice == "paper") {
      cout << "You win!" << endl;
    } else {
      cout << "The computer wins." << endl;
    }
  } else {
    cout << "Invalid input." << endl;
  }
  
  return 0;
}
