
// program to take in user fraction and find the reduced form

#include <iostream>

#include "Rational.h"

using namespace std;

int main()
{
	int numr;
	int deno;

	// flags used to decide the sign of output fraction
	bool nflag = false;
	bool dflag = false;
	bool bflag = false;

	cout << "Enter the numerator and denominator separated by a space: ";
 // cin only grabs until next blank so i can be used twice to grab both numbers
	cin >> numr; // gets first number in list
	cin >> deno; // gets second number in list
	
	if (numr < 0) 
	{
		nflag = true;
		numr *= -1;
	}
	if (deno < 0) 
	{
		dflag = true;
		deno *= -1;
	}
	if ((nflag == true) && (dflag == true)) 
		{ bflag = true; }

	// creating the obj to store and reduce fraction
	Rational frac(numr, deno);
	if (((nflag == true) || (dflag == true)) && (bflag == false)) 
		{ cout << "Reduced form: " << "-" << frac << endl; }
	else
		{ cout << "Reduced form: " << frac << endl; }

	return 0;
}