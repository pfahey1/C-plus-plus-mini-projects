/*

Nothing for Assignment 5

Paul Fahey

3 November 2011
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Nothing
{
public:
	Nothing();
	Nothing(Nothing &);
	void operator=(Nothing &);
	~Nothing();
};

Nothing::Nothing()
{
	cout << "Hi I am the default constructor" << endl;
}

Nothing::Nothing(Nothing &)
{
	cout << "Hi I am the copy constructor" << endl;
}

void Nothing::operator=(Nothing &nothing)
{
		cout << "Hi I am the copy assignment" << endl;
            return; 
}
Nothing::~Nothing()
{
	cout << "Hi I am  the Default destructor" << endl;
}

int main(int argc, char* argv[])
{
	cout << "Welcome to the Nothing class tester for assignment 5 \n" << endl;

	Nothing N1;
	Nothing N2;
	Nothing N3(N1);
	N2 = N1;

	cout << endl;
	cout << "Thank you for using the Nothing class tester for assignment 5" << endl;
	
}
