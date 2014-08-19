/* 

Monster Class Source file for Assignment 7

Paul Fahey
 
28 November 2011

 */

#include "CPTN230A7class_monster_fahey.h" // Includes the monster class header file

monster::monster() // Default monster constructor initializes the data members
 {
 cout << "Monster Constructor" << endl; // A message that will explicitly display the constructors existence when called
 darkness = " "; // darkness is set with an string value of empty string
 }

monster::~monster() // Monster destructor that will destroy the monster objects
 {
 cout << "Monster Destructor" << endl; // A message to show the destructors existence when called
 }

void monster::set_darkness(string input) // The set darkness function is initialized that takes in a input darkness as a parameter
 {
 darkness = input; // The input darkness is given as the value for data member darkness
 return;
 }

string monster::get_darkness(void) // The get darkness function is initialized that takes in no parameters
 {
 return darkness; // It returns the darkness data member to the application file
 }

