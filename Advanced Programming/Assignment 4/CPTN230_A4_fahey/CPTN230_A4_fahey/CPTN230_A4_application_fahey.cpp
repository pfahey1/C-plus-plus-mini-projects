/*

Application Source File for Assignment 4

Paul Fahey

17 October 2011

*/

#include <iostream>
#include <iomanip>
using namespace std;

#include "CPTN230_A4_class_fahey.h" // Includes the creeper class header file

void display_creeper_stats(creeper &);// A prototype function is created that will display the contents of the creeper object, and take in a pointer of type creeper as a parameter

int main(int argc, char* argv[]) // The main function begins

{
	
	
	cout << "Welcome to assignment 4" << endl; // A message that welcomes the user to the program
    cout << endl;
	cout << endl;

	// Nine creeper objects are made to test the constructors and the results are displayed to the screen

	creeper creeper1;
	cout << "creeper1:"; display_creeper_stats(creeper1); 
	creeper creeper2(2);
	cout << "creeper2:"; display_creeper_stats(creeper2); 
	creeper creeper3(3,65);
	cout << "creeper3:"; display_creeper_stats(creeper3); 
	creeper creeper4(1,50,100);
	cout << "creeper4:"; display_creeper_stats(creeper4); 
	creeper creeper5(3,65,75,120);
	cout << "creeper5:"; display_creeper_stats(creeper5); 
	creeper creeper6(2,100,75,120);
	cout << "creeper6:"; display_creeper_stats(creeper6); 
	creeper creeper7(3,65,75,120);
	cout << "creeper7:"; display_creeper_stats(creeper7); 
	creeper creeper8(1,100,20,90);
	cout << "creeper8:"; display_creeper_stats(creeper8); 
	creeper creeper9(2,50,20,90);
	cout << "creeper9:"; display_creeper_stats(creeper9); 

	// Tests described in the application summary in a table are executed for the nine objects created with an output of pass or fail to the screen

	if ( (creeper1 == creeper4) )
	{
		cout << "Test 1 Passed" << endl;
	}
	else
	{
		cout << "Test 1 Failed" << endl;
	}

	if ( (creeper2 == creeper8) )
	{
		cout << "Test 2 Passed" << endl;
	}
	else
	{
		cout << "Test 2 Failed" << endl;
	}

	if ( (creeper3 == creeper1) )
	{
		cout << "Test 3 Passed" << endl;
	}
	else
	{
		cout << "Test 3 Failed" << endl;
	}

	if ( (creeper6 != creeper7) )
	{
		cout << "Test 4 Passed" << endl;
	}
	else
	{
		cout << "Test 4 Failed" << endl;
	}

	if ( (creeper9 != creeper2) )
	{
		cout << "Test 5 Passed" << endl;
	}
	else
	{
		cout << "Test 5 Failed" << endl;
	}

	if ( (creeper3 != creeper7) )
	{
		cout << "Test 6 Passed" << endl;
	}
	else
	{
		cout << "Test 6 Failed" << endl;
	}

	if ( (creeper4 > creeper1) )
	{
		cout << "Test 7 Passed" << endl;
	}
	else
	{
		cout << "Test 7 Failed" << endl;
	}

	if ( (creeper7 > creeper8) )
	{
		cout << "Test 8 Passed" << endl;
	}
	else
	{
		cout << "Test 8 Failed" << endl;
	}

	if ( (creeper3 > creeper1) )
	{
		cout << "Test 9 Passed" << endl;
	}
	else
	{
		cout << "Test 9 Failed" << endl;
	}

	if ( (creeper5 > creeper2) )
	{
		cout << "Test 10 Passed" << endl;
	}
	else
	{
		cout << "Test 10 Failed" << endl;
	}

	if ( (creeper7 > creeper4) )
	{
		cout << "Test 11 Passed" << endl;
	}
	else
	{
		cout << "Test 11 Failed" << endl;
	}
	
	cout << endl;
	cout << "Thank you for using assignment 4" << endl; // A message is displayed that thanks the user for using the program

	cout << endl;
	cout << endl;

} // The main function has ended

	void display_creeper_stats(creeper &creeper)// The display creeper function is defined that takes in a the creeper pointer as a parameter of type creeper
	{
		cout << endl;
		cout << "Target: " << creeper.get_target() << " was chosen" <<  endl; // get target is called and displays the target on the screen
        cout << "Explosion: " << creeper.get_explosion() << " feet" << endl; // get explosionis called and displays the explosion on the screen
		cout << "Awareness: " << creeper.get_awareness() << " foot radius" << endl; // get awareness is called and displays the awareness on the screen
		cout << "Direction: " << creeper.get_direction() << " degrees" <<  endl;// get direction is called and displays the direction on the screen
		cout << endl;
		cout << endl;
	}

	/*

	Object	Target	Explosion	Awareness	Direction
	-------------------------------------------------
	Creeper1	1	50	        100	        180
	Creeper2	2	100	        20	        90
	Creeper3	3	65	        75			120
	Creeper4	1	50			100			180
	Creeper5	3	65			75			120
	Creeper6	2	100			20			90
	Creeper7	3	65			75			120
	Creeper8	1	100			20			90
	Creeper9	2	50			20			90

	Test			Status	Result	Comment
   --------------------------------------------------	
Creeper1==Creeper4	Pass	True	All fields ==
Creeper2==Creeper8	Fail	False	Target != Target
Creeper3==Creeper1	Fail	False	All fields !=
Creeper6!=Creeper7	Pass	True	All fields !=
Creeper9!=Creeper2	Pass	True	Explosion !=
Creeper3!=Creeper7	Fail	False	All fields ==
Creeper4>Creeper1	Fail	False	All fields ==
Creeper7>Creeper8	Fail	False	Explosion<Explosion
Creeper3>Creeper1	Pass	True	Explosion&Awareness>
Creeper5>Creeper2	Fail	False	Explosion&Awareness<
Creeper7>Creeper4	Pass	True	Awareness>Awareness

*/
