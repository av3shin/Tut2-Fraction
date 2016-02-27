#include <iostream>
#include <cmath>

using namespace std; //allows for the negligence of the std prefix after every use of the iostream library 

class Fraction //creation of the class Fraction
{
private:
	int num;
	int den;
public: //Access specifier
	Fraction() //Default constructor
	{
		int num, den;
	}

	~Fraction() //Destructor
	{

	}

	void setNumDenom(Fraction a)
	{
		cout << "Please enter a numerator: " << endl;
		cin >> a.num;
		cout << "Please enter a denominator" << endl;
		cin >> a.den;
	}

	void getNumDenom(Fraction a)
	{

	}

	void print(Fraction a)
	{
		cout << a.num << "/" << a.den << endl;
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





