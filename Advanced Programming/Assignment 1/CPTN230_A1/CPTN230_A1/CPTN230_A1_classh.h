// This is the CPTN230 A1 CLass Header File

#include <iostream>
#include <iomanip>
using namespace std;

#define MAX_SIZE 5

class Numbers
{
private:

	int nums[MAX_SIZE];
	int total;
	double average;


public:

	Numbers();
	void Display_the_numbers(void);
	void Set__an_int(int, int);
	int Get_an_int(int);
	void Do_the_math(void);
	void Display_the_results(void);
};
