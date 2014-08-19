/* 

Zombie Class Source file for Assignment 8

Paul Fahey
 
3 December 2011

 */

#include "CPTN230A8class_zombie_fahey.h" //Includes the zombie class header file

zombie::zombie() // Default zombie constructor initializes the data members
 {
 cout << "Zombie Constructor" << endl; // A message that will explicitly display the constructors existence when called
 flesh = ""; // flesh is set with an empty string
 }

zombie::~zombie() // Zombie destructor that will destroy the monster objects
 {
 cout << "Zombie Destructor" << endl; // A message to show the destructors existence when called
 }

void zombie::set_flesh(string input) // The set flesh function is initialized that takes in a input flesh as a parameter
 {
 flesh = input; // The input flesh is given as the value for data member flesh
 return;
 }

string zombie::get_flesh(void) // The get flesh function is initialized that takes in no parameters
 {
 return flesh; // It returns the flesh data member to the application file
 }

void zombie::set_darkness(string input) // The set darkness function is initialized that takes in a input darkness as a parameter
 {
 cout << "Zombie Set Darkness" << endl; // A message to show the set darkness function's existence when called for this class
 darkness = input; // The input darkness is given as the value for data member darkness
 return;
 }

string zombie::get_darkness(void) // The get darkness function is initialized that takes in no parameters
 {
 return darkness; // It returns the darkness data member to the application file
 }
