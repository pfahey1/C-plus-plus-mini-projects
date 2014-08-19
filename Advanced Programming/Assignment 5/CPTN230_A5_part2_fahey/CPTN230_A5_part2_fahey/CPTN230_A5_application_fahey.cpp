/*

Application Source File for Assignment 5

Paul Fahey

8 November 2011

*/

#include <iostream>
#include <iomanip>
using namespace std;

#include "CPTN230_A5_class_creeper_fahey.h" // Includes the creeper class header file
#include "CPTN230_A5_class_zombie_fahey.h" // Includes the zombie class header file

 void display_creepers(creeper &); // A prototype function is created that will display the contents of the creeper object using the address of the creeper instance
 void display_zombies(zombie &); // A prototype function is created that will display the contents of the zombie object using the address of the zombie instance


int main(int argc, char* argv[]) // The main function begins

{
	cout << "Welcome to assignment 5" << endl; // A message that welcomes the user to the program
    cout << endl;
	cout << endl;

	// Eight creeper objects are made to test the constructors and the results are displayed to the screen

	creeper creeper1;
	cout << "Creeper1: "; display_creepers(creeper1);
	creeper creeper2(4);
	cout << "Creeper2: "; display_creepers(creeper2);
	creeper creeper3(6);
	cout << "Creeper3: "; display_creepers(creeper3);
	creeper creeper4(8);
	cout << "Creeper4: "; display_creepers(creeper4);
	creeper creeper5(2);
	cout << "Creeper5: "; display_creepers(creeper5);
	creeper creeper6(4);
	cout << "Creeper6: "; display_creepers(creeper6);
	creeper creeper7(6);
	cout << "Creeper7: "; display_creepers(creeper7);
	creeper creeper8(8);
	cout << "Creeper8: "; display_creepers(creeper8);

	cout << endl;

   // Eight zombie objects are made to test the constructors and the results are displayed to the screen

	zombie zombie1;
	cout << "Zombie1: "; display_zombies(zombie1);
	zombie zombie2(4);
	cout << "Zombie2: "; display_zombies(zombie2);
	zombie zombie3(6);
	cout << "Zombie3: "; display_zombies(zombie3);
	zombie zombie4(8);
	cout << "Zombie4: "; display_zombies(zombie4);
	zombie zombie5(2);
	cout << "Zombie5: "; display_zombies(zombie5);
	zombie zombie6(4);
	cout << "Zombie6: "; display_zombies(zombie6);
	zombie zombie7(6);
	cout << "Zombie7: "; display_zombies(zombie7);
	zombie zombie8(8);
	cout << "Zombie8: "; display_zombies(zombie8);

	cout << endl;

  // Tests described in the application summary in a table are executed for the eight objects for the creeper and zombie classes

	if ( (creeper1 == creeper5) )
	{
		cout << "Test 1 Passed" << endl;
	}
	else
	{
		cout << "Test 1 Failed" << endl;
	}

	if ( (creeper2 == creeper3) )
	{
		cout << "Test 2 Passed" << endl;
	}
	else
	{
		cout << "Test 2 Failed" << endl;
	}

	if ( (creeper4 != creeper7) )
	{
		cout << "Test 3 Passed" << endl;
	}
	else
	{
		cout << "Test 3 Failed" << endl;
	}

	if ( (creeper8 != creeper4) )
	{
		cout << "Test 4 Passed" << endl;
	}
	else
	{
		cout << "Test 4 Failed" << endl;
	}

	if ( (creeper6 > creeper8) )
	{
		cout << "Test 5 Passed" << endl;
	}
	else
	{
		cout << "Test 5 Failed" << endl;
	}

	if ( (creeper2 > creeper6) )
	{
		cout << "Test 6 Passed" << endl;
	}
	else
	{
		cout << "Test 6 Failed" << endl;
	}

	if ( (creeper3 > creeper1) )
	{
		cout << "Test 7 Passed" << endl;
	}
	else
	{
		cout << "Test 7 Failed" << endl;
	}

	cout << endl;

	if ( (zombie1 == zombie5) )
	{
		cout << "Test 8 Passed" << endl;
	}
	else
	{
		cout << "Test 8 Failed" << endl;
	}

	if ( (zombie2 == zombie3) )
	{
		cout << "Test 9 Passed" << endl;
	}
	else
	{
		cout << "Test 9 Failed" << endl;
	}

	if ( (zombie4 != zombie7) )
	{
		cout << "Test 10 Passed" << endl;
	}
	else
	{
		cout << "Test 10 Failed" << endl;
	}

	if ( (zombie8 != zombie4) )
	{
		cout << "Test 11 Passed" << endl;
	}
	else
	{
		cout << "Test 11 Failed" << endl;
	}

	if ( (zombie6 > zombie8) )
	{
		cout << "Test 12 Passed" << endl;
	}
	else
	{
		cout << "Test 12 Failed" << endl;
	}

	if ( (zombie2 > zombie6) )
	{
		cout << "Test 13 Passed" << endl;
	}
	else
	{
		cout << "Test 13 Failed" << endl;
	}

	if ( (zombie3 > zombie1) )
	{
		cout << "Test 14 Passed" << endl;
	}
	else
	{
		cout << "Test 14 Failed" << endl;
	}

	cout << endl;
 
	// Mixed class tests for both classes created with an output of pass or fail to the screen

	if ( (creeper1 == zombie5) )
	{
		cout << "Test 15 Passed" << endl;
	}
	else
	{
		cout << "Test 15 Failed" << endl;
	}

	if ( (zombie2 == creeper3) )
	{
		cout << "Test 16 Passed" << endl;
	}
	else
	{
		cout << "Test 16 Failed" << endl;
	}

	if ( (zombie4 != creeper7) )
	{
		cout << "Test 17 Passed" << endl;
	}
	else
	{
		cout << "Test 17 Failed" << endl;
	}

	if ( (creeper8 != zombie4) )
	{
		cout << "Test 18 Passed" << endl;
	}
	else
	{
		cout << "Test 18 Failed" << endl;
	}

	if ( (zombie6 > creeper8) )
	{
		cout << "Test 19 Passed" << endl;
	}
	else
	{
		cout << "Test 19 Failed" << endl;
	}

	if ( (creeper2 > zombie6) )
	{
		cout << "Test 20 Passed" << endl;
	}
	else
	{
		cout << "Test 20 Failed" << endl;
	}

	if ( (creeper3 > zombie1) )
	{
		cout << "Test 21 Passed" << endl;
	}
	else
	{
		cout << "Test 21 Failed" << endl;
	}

	cout << endl;

	cout << "Thank you for using assignment 5" << endl; // A message is displayed that thanks the user for using the program

} // The main function has ended

 void display_creepers(creeper &creeper) // The display creeper function is defined that takes in a the address of a creeper object as a parameter of type creeper
 {
	cout << creeper.get_creeper() << " " << endl; // get creeper is called and displays the creeper on the screen
 }


 void display_zombies(zombie &zombie) // The display zombie function is defined that takes in a the address of a zombie object as a parameter of type zombie
 {
	 cout << zombie.get_zombie() << " " << endl; // get zombie is called and displays the zombie on the screen
 }
 

/*

Object		Creeper		Object		Zombie
Creeper1	2			Zombie1		2
Creeper2	4			Zombie2		4
Creeper3	6			Zombie3		6
Creeper4	8			Zombie4		8
Creeper5	2			Zombie5		2
Creeper6	4			Zombie6		4
Creeper7	6			Zombie7		6
Creeper8	8			Zombie8		8


Test					Status			Result			Comment
Creeper1==Creeper5		Pass			True			==
Creeper2==Creeper3		Fail			False			!= 
Creeper4!=Creeper7		Pass			True			!=
Creeper8!=Creeper4		Fail			False			==
Creeper6>Creeper8		Fail			False			<
Creeper2>Creeper6		Fail			False			==
Creeper3>Creeper1		Pass			True			>


Test					Status			Result			Comment
Zombie1==Zombie5		Pass			True			==
Zombie2==Zombie3		Fail			False			!= 
Zombie4!=Zombie7		Pass			True			!=
Zombie8!=Zombie4		Fail			False			==
Zombie6>Zombie8			Fail			False			<
Zombie2>Zombie6			Fail			False			==
Zombie3>Zombie1			Pass			True			>


Test					Status			Result			Comment
Creeper1==Zombie5		Pass			True			==
Zombie2==Creeper3		Fail			False			!= 
Zombie4!=Creeper7		Pass			True			!=
Creeper8!=Zombie4		Fail			False			All fields ==
Zombie6>Creeper8		Fail			False			<
Creeper2>Zombie6		Fail			False			==
Creeper3>Zombie1		Pass			True			>

*/

