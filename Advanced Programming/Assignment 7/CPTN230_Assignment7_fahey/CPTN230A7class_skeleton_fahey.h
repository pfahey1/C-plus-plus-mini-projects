/*

skeleton Class Header File for Assignment 7

Paul Fahey

28 November 2011

*/

#ifndef SKELETON_H
#define SKELETON_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include"CPTN230A7class_zombie_fahey.h" // Will include the zombie class

// A class called skeleton is created 

class skeleton : public zombie // The skeleton class will publicly inherit the zombie class
{

private: 
	string bones; // A bones with type string

public:

	skeleton(); // A default skeleton constructor that will initialize all the data members
	~skeleton(); //A skeleton destructor that will destroy the skeleton objects
	void set_bones(string); // A set function to set the bones that will not return any value but take in a string value
	string get_bones(void); // A get function to get the bones that will return an string value but not take in any value
};
#endif