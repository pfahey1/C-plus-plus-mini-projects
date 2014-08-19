/*

Application Source File for Assignment 2

Paul Fahey

29 September 2011

*/

#include <iostream>
#include <iomanip>
using namespace std;

#include "CPTN230_A2_class_fahey.h" // Includes the creeper class header file

void display_creeper_stats(creeper *);// A prototype function is created that will display the contents of the creeper object, and take in a pointer of type creeper as a parameter

int main(int argc, char* argv[]) // The main function begins

{
	creeper creeper1; // A creeper1 object is instantiated that's type creeper
	creeper creeper2; // A creeper2 object is instantiated that's type creeper
	creeper *current_creeper; // A current creeper pointer to an object of type creeper is instantiated
	
	cout << "Welcome to assignment 2" << endl; // A message that welcomes the user to the program
    cout << endl;
	cout << endl;

	string objective;// A local variable of type string to the application file is created for target called objective
	string blast;// A local variable  of type string to the application file is created for explosion called blast
	int alertness;// A local variable of type integer to the application file is created for awareness called alertness
	int path;// A local variable of type integer to the application file is created for the direction called path

	cout << endl;
    cout << "Please enter a target for the creeper: " << endl;// A message that prompts for a target to be entered
	cin >> objective; // The input is assigned to the local variable of objective
    cout << endl;
    cout << "Please enter a explosion for the creeper to apply to the target (ex: Huge): " << endl;// A message that prompts for an explosion to be entered
	cin >> blast; // The input is assigned to the local variable of blast
    cout << endl;
    cout << "Please enter an awareness number in feet for which the Creeper will notice a target close to them: " << endl;// A message that prompts for an awareness to be entered
	cin  >> alertness; // The input is assigned to the local variable of alertness
    cout << endl;
	cout << "Please enter a direction for the creeper to go in in terms of degrees: " << endl;// A message that prompts for a direction to be entered
	cin >> path; // The input is assigned to the local variable of path
    cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	creeper1.set_target(objective);// The creeper1 instance calls the set target function that takes in the local variable of objective
	creeper1.set_explosion(blast);// The creeper1 instance calls the set explosion function that takes in the local variable of blast
	creeper1.set_awareness(alertness);// The creeper1 instance calls the set awareness function that takes in the local variable of alertness
	creeper1.set_direction(path);// The creeper1 instance calls the set direction function that takes in the local variable of direction

	cout << "Please enter a target for another creeper: " << endl;// A message that prompts for a target to be entered
	cin >> objective; // The input is assigned to the local variable of objective
    cout << endl;
    cout << "Please enter a explosion for another creeper to apply to the target (ex: Huge): " << endl;// A message that prompts for an explosion to be entered
	cin >> blast; // The input is assigned to the local variable of blast
	cout << endl;
	cout << "Please enter an awareness number in feet for which the another Creeper will notice a target close to them: " << endl;// A message that prompts for an awareness to be entered
	cin  >> alertness; // The input is assigned to the local variable of alertness
	cout << endl;
	cout << "Please enter a direction for another creeper to go in in terms of degrees: " << endl;// A message that prompts for a direction to be entered
	cin >> path; // The input is assigned to the local variable of path
	cout << endl;
	cout << endl;
    
	creeper2.set_target(objective);// The creeper2 instance calls the set target function that takes in the local variable of objective
	creeper2.set_explosion(blast);// The creeper2 instance calls the set explosion function that takes in the local variable of blast
	creeper2.set_awareness(alertness);// The creeper2 instance calls the set awareness function that takes in the local variable of alertness
	creeper2.set_direction(path);// The creeper2 instance calls the set direction function that takes in the local variable of direction

	current_creeper = &creeper1;// The current creeper pointer is give the address of creeper1
	cout << " The creepers statistics are as follows: " << endl; // A message will be displayed to the screen that will say the creepers statistics
	cout << endl;
	cout << "Creeper1 Instance" << endl; // Current instance statistics
	display_creeper_stats(current_creeper);// The display the creeper function is called that takes in the current creeper pointer as a parameter

    current_creeper = &creeper2;// The current creeper pointer is give the address of creeper2
	cout << "Creeper2 Instance" << endl; // Current instance statistics
	display_creeper_stats(current_creeper);// The display the creeper function is called that takes in the current creeper pointer as a parameter

	cout << "Thank you for using assignment 2" << endl; // A message is displayed that thanks the user for using the program

	cout << endl;
	cout << endl;

} // The main function has ended

	void display_creeper_stats(creeper *the_creeper)// The display creeper function is defined that takes in a the creeper pointer as a parameter of type creeper
	{
		cout << endl;
		cout << "Target: " << the_creeper->get_target() << endl; // the creeper pointer points to the member function of get target which is called and displays the target on the screen
        cout << "Explosion: " << the_creeper->get_explosion() << endl; // the creeper pointer points to the member function of get explosion which is called and displays the explosion on the screen
		cout << "Awareness: " << the_creeper->get_awareness() << " foot radius" << endl; // the creeper pointer points to the member function of get awareness which is called and displays the awareness on the screen
		cout << "Direction: " << the_creeper->get_direction() << " degrees" <<  endl;// the creeper pointer points to the member function of get direction which is called and displays the direction on the screen
		cout << endl;
		cout << endl;
	}
