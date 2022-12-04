#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Fraction.h"
using namespace std;

int main() {
	// Instantiate the Fraction.
	Fraction frac_1(3, 9);
	Fraction frac_2(11, 19);
	Fraction sum;

	sum = frac_1 + frac_2;

	/*
	myFraction.PrintFraction();
	cout << endl;

	Fraction myOtherFraction(1, 0);
	myOtherFraction.PrintFraction();
	cout << endl;

	myFraction.setNumerator(10);
	myFraction.setDenominator(0);

	cout << myFraction.getNumerator() << endl;
	cout << myFraction.getDenominator() << endl;
	myFraction.PrintFraction();
	*/


	// It's Over!
	_getch();
	return 0;
}