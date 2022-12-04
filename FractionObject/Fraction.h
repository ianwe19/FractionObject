#ifndef __FRACTION__
#define __FRACTION__

#include <iostream>
using namespace std;

class Fraction {
private:
	int numerator;
	int denominator;

	void reduce();

public:
	// Constructors
	Fraction();
	Fraction(int, int);

	// Getters
	int getNumerator();
	int getDenominator();

	// Setters
	// Description: Sets the numerator to the requested.
	//  value.  If the new value was accepted, return TRUE.
	//  If the new value was rejected, return FALSE.
	bool setNumerator(int);

	// Description: Sets the denominator to the requested.
	//  value.  If the new value was accepted, return TRUE.
	//  If the new value was rejected, return FALSE.
	bool setDenominator(int);

	// Overload Methods
	Fraction operator=(Fraction);
	Fraction operator+(Fraction);

	// OVERLOAD OTHER OPERATIONS

	// OVERLOAD OUTPUT (<<)

	// Other Methods
	// Description: Prints the objects on the display.
	//  THIS SHOULD GET REPLACED WITH AN OVERLOAD LATER!
	void PrintFraction();



};

#endif