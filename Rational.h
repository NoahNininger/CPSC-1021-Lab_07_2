#ifndef RATIONAL_H_
#define RATIONAL_H_

#include <iostream>

using namespace std;

class Rational 
{
	private:
		int numeratior, denominator;
		void reduce();
	public:
		Rational(int,int);

		int getNum();
		int getDeno();

	 // friend for overloading operator to use private members
		friend ostream& operator<< (ostream& out, const Rational& rat);
};

#endif