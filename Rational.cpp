#include "Rational.h"

using namespace std;

Rational::Rational(int numr, int deno) 
{
 // check for negtive ints in main program, should only receve postive numbers
 // storing and reducing numr and deno
	numeratior = numr;
	denominator = deno;
	reduce();
}

// getter fuctions used for testing
int Rational::getNum() 
	{ return numeratior; }
int Rational::getDeno() 
	{ return denominator; }

// reduces fraction by finding 
void Rational::reduce() 
{
	for (int i = numeratior * denominator; i > 1; i -= 1) 
	{
		if ((numeratior % i == 0) && (denominator % i == 0)) 
		{
			numeratior /= i;
			denominator /= i;
		}
	}
}

// overloading the insertion operator
ostream& operator<< (ostream& out, const Rational& rat) 
{
	out << rat.numeratior << '/' << rat.denominator;
	return out;
}