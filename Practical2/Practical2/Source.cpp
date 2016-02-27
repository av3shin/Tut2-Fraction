#include <iostream>
#include <cmath>

using namespace std; //allows for the negligence of the std prefix after every use of the iostream library 

class Fraction //creation of the class Fraction
{
private:

public: //Access specifier
	int num;
	int den;
	void add(Fraction, Fraction);
	void sub(Fraction, Fraction);
	void mult(Fraction, Fraction);
	void div(Fraction, Fraction);
	void setValues();



	Fraction() //Default constructor
	{
		int num, den;
	}

	~Fraction() //Destructor
	{

	}

	void setNumDenom()
	{
		cout << "Please enter a numerator: " << endl;
		cin >> num;
		cout << "Please enter a denominator" << endl;
		cin >> den;
	}

	void getNumDenom(Fraction a)
	{

	}

	void print(Fraction a)
	{
		cout << a.num << "/" << a.den << endl;
	}

	void add(Fraction A, Fraction B)
	{
		num = (A.num*B.den) + (B.num*A.den);
		den = A.den*B.den;
	}

};

int main()
{
	Fraction one; //Fraction object created
	Fraction two;

	one.setNumDenom;
	two.setNumDenom;
	one.print;
	two.print;
}





