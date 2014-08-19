/* 

Skeleton Class Source file for Assignment 8

Paul Fahey
 
3 December 2011

 */

#include "CPTN230A8class_skeleton_fahey.h" //Includes the skeleton class header file

skeleton::skeleton() // Default skeleton constructor initializes the data members
 {
 cout << "Skeleton Constructor" << endl; // A message that will explicitly display the constructors existence when called
 bones = ""; // bones is set with an empty string
 }

skeleton::~skeleton() // Skeleton destructor that will destroy the skeleton objects
 {
 cout << "Skeleton Destructor" << endl; // A message to show the destructors existence when called
 }

void skeleton::set_bones(string input) // The set bones function is initialized that takes in a input bones as a parameter
 {
 bones = input; // The input bones is given as the value for data member bones
 return;
 }

string skeleton::get_bones(void) // The get bones function is initialized that takes in no parameters
 {
 return bones; // It returns the bones data member to the application file
 }

void skeleton::set_darkness(string input) // The set darkness function is initialized that takes in a input darkness as a parameter
 {
 cout << "Skeleton Set Darkness" << endl; // A message to show the set darkness function's existence when called for this class
 darkness = input; // The input darkness is given as the value for data member darkness
 return;
 }

string skeleton::get_darkness(void) // The get darkness function is initialized that takes in no parameters
 {
 return darkness; // It returns the darkness data member to the application file
 }
