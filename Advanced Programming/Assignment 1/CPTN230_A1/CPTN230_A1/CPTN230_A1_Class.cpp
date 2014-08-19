// This is the CPTN230 A1 Class Source Code File


#include "CPTN230_A1_classh.h"

Numbers::Numbers()
{
	int i;
	total = 0;
	average = 0;
	for (i = 0; i < 5; i++)
	{
		nums[i] = 0;
	}
}

void Numbers::Display_the_numbers(void)
{
	for(int k = 0; k < MAX_SIZE; k++)
	{
		cout << "Number " << k + 1 << " is " << nums[k] << '.' << endl;
	}
	return;
}

int Numbers::Get_an_int(int location)
{
	return nums[location];
}

void Numbers::Set__an_int(int location, int value)
{
	nums[location] = value;
	return;
}

void Numbers::Do_the_math(void)
{
	total = 0;
	for(int k = 0; k < MAX_SIZE; k++)
	{
		total = total + nums[k];
	}
	average = (double) total / MAX_SIZE;
	return;
}

void Numbers::Display_the_results(void)
{
	cout << "The total is " << total << " and the average is " << flush;

	if (total > 99999)
		cout.precision(7);
	if(total > 9999)
		cout.precision(6);
	else if(total > 999)
		cout.precision(5);
	else if(total > 99)
		cout.precision(4);
	else
		cout.precision(3);
	cout << showpoint << average << '.' << endl;
	return;
}


