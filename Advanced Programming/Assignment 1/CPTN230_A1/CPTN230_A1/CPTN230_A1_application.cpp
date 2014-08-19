// This is the CPTN230 A1 Application Source Code File


#include <iostream>
#include <iomanip>
using namespace std;

#include "CPTN230_A1_classh.h"

int calculate_results(Numbers *);

int main(int argc, char *argv[])
{
	int j = MAX_SIZE,
	k = 0;


	Numbers my_numbers;

	Numbers *the_numbers = &my_numbers;

	cout << "Welcome to the CPTN230 Assignment 1 Application. \n" << endl;

	cout << "Please enter "
		<< j
		<< " integers at the prompt"
		<< endl
		<< "and end each one by pressing the \"Enter\" key."
		<< endl;

	j = 0;
	while (j < MAX_SIZE)
	{
		cout << "Enter Integer " << j + 1 << ": " << flush;
		cin >> k;
		my_numbers.Set__an_int(j, k);
		j++;
	}

	cout << endl;

	my_numbers.Display_the_numbers();

	cout << "The 3rd number was "
		<< my_numbers.Get_an_int(2)
		<< '.'
		<< endl
		<< endl;

	if (calculate_results(the_numbers))
	{
		my_numbers.Display_the_results();
	}
	else
	{
		cout << "Error in call to calculate_results." << endl;
		exit(1);
	}

	cout << endl;

	cout << "Thank you for using the CPTN230 Assignment 1 Application." << endl;

	return 0;
}

int calculate_results(Numbers *generate_results)
{
	generate_results->Do_the_math();
	return 1;
}
