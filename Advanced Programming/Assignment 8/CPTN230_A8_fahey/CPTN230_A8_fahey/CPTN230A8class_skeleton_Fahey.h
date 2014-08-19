/*

skeleton Class Header File for Assignment 8

Paul Fahey

3 December 2011

*/

#ifndef SKELETON_H
#define SKELETON_H

#include <iostream>
#include <iomanip>
using namespace std;

#include"CPTN230A8class_zombie_fahey.h" // Will include the zombie class

// A class called skeleton is created 

class skeleton : public zombie // The skeleton class will publicly inherit the zombie class
{

private: 
	string bones; // A bones with type string
	string darkness; // A darkness with type string

public:

	skeleton(); // A default skeleton constructor that will initialize all the data members
	~skeleton(); //A skeleton destructor that will destroy the skeleton objects
	void set_bones(string); // A set function to set the bones that will not return any value but take in a string value
	string get_bones(void); // A get function to get the bones that will return an string value but not take in any value
	virtual void set_darkness(string); // A virtual set function to set the darkness that will not return any value but take in a string value
	virtual string get_darkness(void); // A virtual get function to get the darkness that will return an string value but not take in any value
};
#endif