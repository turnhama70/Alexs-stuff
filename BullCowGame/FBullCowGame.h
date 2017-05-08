#pragma once
#include <string>

class FBullCowGame{
public:
	void Reset(); // TOO make a more rich return value.
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::string); // TOO make More rich return value.

// ^^ Please try and ignore this and focus on the interface above ^^
private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};