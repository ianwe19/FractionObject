#include "Fraction.h"

Fraction::Fraction() {
	this->numerator = 0;
	this->denominator = 1;
}


// NOT DONE YET
Fraction::Fraction(int numerator, int denominator) {
	this->setNumerator(numerator);

	// In the event the user tries to make a Fraction
	//  with a 0 in the denominator, set the denominator
	//  to 1.
	if (this->setDenominator(denominator) == false) {
		this->denominator = 1;
	}
}


// NOT DONE YET
int Fraction::getNumerator() {
	return this->numerator;
}


// NOT DONE YET
int Fraction::getDenominator() {
	return this->denominator;
}


// NOT DONE YET
bool Fraction::setNumerator(int newNumerator) {
	this->numerator = newNumerator;
	return true;
}


// NOT DONE YET
bool Fraction::setDenominator(int newDenominator) {
	bool goodValue = false;
	if (newDenominator != 0) {
		this->denominator = newDenominator;
		goodValue = true;
	}

	return goodValue;	// indicate if a new value was
	// accepted for the denominator
}


Fraction Fraction::operator=(Fraction rFrac) {
	this->numerator = rFrac.numerator;
	this->denominator = rFrac.denominator;

	Fraction returnMe(this->denominator, this->numerator);
	return returnMe;
}


// NOT DONE YET
Fraction Fraction::operator+(Fraction addMe) {
	Fraction returnMe;
	returnMe.setNumerator(this->numerator * addMe.denominator + this->denominator * addMe.numerator);
	returnMe.setDenominator(this->denominator * addMe.denominator);
	return returnMe;
}


// NOT DONE YET
void Fraction::PrintFraction() {
	cout << "("
		<< this->numerator << " / "
		<< this->denominator << ")";
}


void Fraction::reduce() {
	// INTENTIONALLY LEFT FOR LATER
}