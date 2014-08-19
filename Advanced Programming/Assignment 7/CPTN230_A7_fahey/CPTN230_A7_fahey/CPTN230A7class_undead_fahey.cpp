/* 

Undead Class Source file for Assignment 7

Paul Fahey
 
28 November 2011

 */

#include "CPTN230A7class_undead_fahey.h" // Includes the undead class header file

undead::undead() // Default undead constructor initializes the data members
 {
 cout << "Undead Constructor" << endl; // A message that will explicitly display the constructors existence when called
 alive = " "; // alive is set with an string value of empty string
 }

undead::~undead() // Undead destructor that will destroy the undead objects
 {
 cout << "Undead Destructor" << endl; // A message to show the destructors existence when called
 }

void undead::set_alive(string input) // The set alive function is initialized that takes in a input alive as a parameter
 {
 alive = input; // The input alive is given as the value for data member darkness
 return;
 }

string undead::get_alive(void) // The get alive function is initialized that takes in no parameters
 {
 return alive; // It returns the alive data member to the application file
 }