/*

Application Source File for Assignment 3

Paul Fahey

6 October 2011

*/

#include <iostream>
#include <iomanip>
using namespace std;

#include "CPTN230_A3_class_fahey.h" // Includes the creeper class header file
#define MAX_NUM_CREEPERS 5 // A constant of five is defined for an instance limit

void display_creeper_stats(creeper *);// A prototype function is created that will display the contents of the creeper object, and take in a pointer of type creeper as a parameter

int main(int argc, char* argv[]) // The main function begins

{
	creeper *current_creeper; // A current creeper pointer to an object of type creeper is instantiated
	creeper **all_creepers; // A pointer to a pointer for all the creepers to an object of type creeper is instantiated
	
	cout << "Welcome to assignment 3" << endl; // A message that welcomes the user to the program
    cout << endl;
	cout << endl;

	cout << "There are " << creeper::get_count_of_creepers() << " actual number of creepers." << endl; // A message that shows the current number of creepers in existence using the get count of creeper function

	all_creepers = new creeper *[MAX_NUM_CREEPERS]; // New memory is allocated to allow five values to be assigned to the all creepers pointer
    for (int i = 0; i < MAX_NUM_CREEPERS; i++) // all creepers is put in a for loop to clear out any possible junk data by assigning the space allocated to be filled with zeros until it is used
	{
		all_creepers[i] = 0;
	}
	
	cout << "There are " << creeper::get_count_of_creepers() << " actual number of creepers." << endl; // A message that shows the current number of creepers in existence using the get count of creeper function at this point


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

	current_creeper = new creeper; // current creeper pointer is assigned a new creeper instance
	cout << "There are " << creeper::get_count_of_creepers() << " actual number of creepers." << endl; // A message that shows the current number of creepers in existence using the get count of creeper function at this point
	current_creeper->set_target(objective); // The current creeper pointer points to the set target function that takes in the local variable of objective
	current_creeper->set_explosion(blast); // The current creeper pointer points to the set Explosion function that takes in the local variable of objective
	current_creeper->set_awareness(alertness); // The current creeper pointer points to the set awareness function that takes in the local variable of objective
	current_creeper->set_direction(path); // The current creeper pointer points to the set direction function that takes in the local variable of objective
	all_creepers[0] = current_creeper; // The first index of the all creepers pointer is assigned to the current creeper pointer
	display_creeper_stats(current_creeper); // The display the creeper function is called that takes in the current creeper pointer as a parameter
	display_creeper_stats(all_creepers[0]);// The display the creeper function is called again that takes in the all creepers pointer at its first index as a parameter


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
    
	current_creeper = new creeper; // current creeper pointer is assigned a new second creeper instance
	cout << "There are " << creeper::get_count_of_creepers() << " actual number of creepers." << endl; // A message that shows the current number of creepers in existence using the get count of creeper function at this point
	current_creeper->set_target(objective); // The current creeper pointer points to the set target function that takes in the local variable of objective
	current_creeper->set_explosion(blast); // The current creeper pointer points to the set Explosion function that takes in the local variable of objective
	current_creeper->set_awareness(alertness); // The current creeper pointer points to the set awareness function that takes in the local variable of objective
	current_creeper->set_direction(path); // The current creeper pointer points to the set direction function that takes in the local variable of objective
	all_creepers[1] = current_creeper; // The second index of the all creepers pointer is assigned to the current creeper pointer
	display_creeper_stats(current_creeper); // The display the creeper function is called that takes in the current creeper pointer as a parameter
	display_creeper_stats(all_creepers[1]);// The display the creeper function is called again that takes in the all creepers pointer at its second index as a parameter

	cout << "There are " << creeper::get_count_of_creepers() << " actual number of creepers." << endl; // A message that shows the current number of creepers in existence using the get count of creeper function at this point
	cout << "There are " << current_creeper->get_count_of_creepers() << " actual number of creepers." << endl; // Another message that shows the current number of creepers in existence, but with the current creeper pointer pointing to the get count of creeper function 
	cout << "There are " << all_creepers[1]->get_count_of_creepers() << " actual number of creepers." << endl; // A third message that shows the current number of creepers in existence, but with the second index of the all creepers pointer pointing to the get count of creepers function
	cout << endl;
	delete all_creepers[0]; // The first index of space for all creeper pointer has been deleted
	cout << "There are " << creeper::get_count_of_creepers() << " actual number of creepers." << endl; // A message that shows the current number of creepers in existence using the get count of creeper function at this point
	delete all_creepers[1]; // The second index of space for all creeper pointer has been deleted
	cout << "There are " << creeper::get_count_of_creepers() << " actual number of creepers." << endl; // A message that shows the current number of creepers in existence using the get count of creeper function at this point
	delete [] all_creepers; // The entire space allocated for all creepers pointer is deleted
	cout << endl;

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
