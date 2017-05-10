#include <iostream>
#include <string>
#include "FBullCowGame.h"


void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // Instanticate a new game.

// This is the Entry Point For our application
int main() 
{
	std::cout << BCGame.GetCurrentTry();

	bool bPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
	return 0; // It exits the application when your finished 
}

// Introduce the game.
void PrintIntro() 
{
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

void PlayGame()
{
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();

	// loop for the number of turns asking for guesses.
	// TODO change from FOR to WHILE loop once we are vaildating tries.
	for (int count = 1; count <= MaxTries; count++)
	{
		std::string Guess = GetGuess(); // TODO make it check for vaild gesses.

		// Submit Vaild guess to the game.
		// print the number of bulls and cows.

		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

std::string GetGuess() 
{

	int CurrentTry = BCGame.GetCurrentTry();

	// get a guess from the player.
	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again y/n ? ";
	std::string Response = "";
	std::getline(std::cin, Response);

	std::cout << std::endl;
	return (Response[0] == 'y') || (Response [0] == 'Y');
}
