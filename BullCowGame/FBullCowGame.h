#pragma once
#include <string>

class FBullCowGame{
public:
	FBullCowGame(); // constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); // TOO make a more rich return value
	bool CheckGuessValidity(std::string); // TOO make More rich return value.

// ^^ Please try and ignore this and focus on the interface above ^^
private:
	// see Constructor for initialistion.
	int MyCurrentTry;
	int MyMaxTries;
};