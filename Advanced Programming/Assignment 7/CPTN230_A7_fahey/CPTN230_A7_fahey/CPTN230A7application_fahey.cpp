/*

Application Source File for Assignment 7

Paul Fahey

28 November 2011

*/

#include <iostream>
#include <iomanip>
using namespace std;

#include "CPTN230A7class_monster_fahey.h" // Includes the monster class header file
#include"CPTN230A7class_undead_fahey.h" // Includes the undead class header file
#include"CPTN230A7class_zombie_fahey.h" // Includes the zombie class header file
#include"CPTN230A7class_skeleton_fahey.h" // Includes the skeleton class header file

int main(int argc, char* argv[]) // The main function begins
{
	
	cout << "Welcome to assignment 7" << endl; // A message that welcomes the user to the program
    cout << endl;
	cout << endl;

	monster big; // A monster object is created
	undead average; // A undead object is created
	zombie walk; // A zombie object is created
	skeleton skinny; // A skeleton object is created

	cout << endl;
	
	big.set_darkness("to roam in the dark"); // The set darkness function is called to set the darkness of the monster object
	cout << "Zombies like " << big.get_darkness() << " most of the time." << endl; // A message is displayed that is accompanied with the get darkness function 

	cout << endl;
	
	average.set_darkness("to sit in the dark"); // The set darkness function is called to set the darkness of the undead object
	average.set_alive("are dead, but act alive"); // The set alive function is called to set the alive of the undead object
	cout << "Undead like " << average.get_darkness() << " and " << average.get_alive() << " most of the time." << endl; // A message is displayed that is accompanied with the get darkness and get alive function 

	cout << endl;
	
	walk.set_darkness("to walk in the dark"); // The set darkness function is called to set the darkness of the zombie object
	walk.set_alive("are dead, but live life"); // The set alive function is called to set the alive of the zombie object
	walk.set_flesh("walking weird, and eat flesh"); // The set flesh function is called to set the flesh of the zombie object
	cout << "Zombies like " << walk.get_darkness() << " and " << walk.get_alive() << " along with \n"  
	<< walk.get_flesh() << " most of the time" << endl; // A message is displayed that is accompanied with the get darkness, get alive, and get flesh function

	cout << endl;
	
	skinny.set_darkness("to run in the dark"); // The set darkness function is called to set the darkness of the skeleton object
	skinny.set_alive("definitely look dead, but are well alive"); // The set alive function is called to set the alive of the skeleton object
	skinny.set_flesh("having no flesh for a while"); // The set flesh function is called to set the flesh of the skeleton object
	skinny.set_bones("have their bones showing"); // The set bones function is called to set the bones of the skeleton object
	cout << "Skeletons like " << skinny.get_darkness() << " and " << skinny.get_alive() << "\n" << "although "
	<< skinny.get_flesh() << " they " << skinny.get_bones() << " all the time." << endl; // A message is displayed that is accompanied with the get darkness, get alive, get flesh, and get bones function 

	cout << endl;

	cout << "Thank you for using assignment 7" << endl; // A message is displayed that thanks the user for using the program

	// The main function has ended
}
