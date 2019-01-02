#pragma once
#include <iostream>
#include "Room.h"
#include "Person.h"
class Activity
{
public:
	Activity();
	Activity(Room*, Person*, std::string);
	void set_Location(Room*);
	Room* get_Location();
	void set_Owner(Person*);
	Person* get_Owner();
	void set_Description(std::string);
	std::string get_Description();
private:
	Room* mLocation;
	Person* mOwner;
	std::string mDescription;
};

