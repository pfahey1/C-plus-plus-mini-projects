/*

zombie Class Header File for Assignment 7

Paul Fahey

28 November 2011

*/

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include"CPTN230A7class_undead_fahey.h" // Will include the undead class

// A class called zombie is created 

class zombie : public undead // The zombie class will publicly inherit the undead class
{

private: 
	string flesh; // A flesh with type string

public:

	zombie(); // A default zombie constructor that will initialize all the data members
	~zombie(); //A zombie destructor that will destroy the zombie objects
	void set_flesh(string); // A set function to set the flesh that will not return any value but take in a string value
	string get_flesh(void); // A get function to get the flesh that will return an string value but not take in any value
};
#endif