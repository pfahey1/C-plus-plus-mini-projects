/*

Monster Class Header File for Assignment 7

Paul Fahey

28 November 2011

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
	string darkness; // A darkness with type string

public:

	monster(); // A default monster constructor that will initialize all the data members
	~monster(); //A monster destructor that will destroy the undead objects
	void set_darkness(string); // A set function to set the darkness that will not return any value but take in a string value
	string get_darkness(void); // A get function to get the darkness that will return an string value but not take in any value
};
#endif