/*

Monster Class Header File for Assignment 8

Paul Fahey

3 December 2011

*/

#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class monster // A class called monster is created
{

private: 
	string darkness; // A darkness with type integer

public:

	monster(); // A default monster constructor that will initialize all the data members
	~monster(); //A monster destructor that will destroy the undead objects
	virtual void set_darkness(string); // A virtual set function to set the darkness that will not return any value but take in a string value
	virtual string get_darkness(void); // A virtual get function to get the darkness that will return an string value but not take in any value
};
#endif