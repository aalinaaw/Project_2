#include "pch.h"
#include "Activity.h"


Activity::Activity()
{
}

Activity::Activity(Room* location, Person* owner, std::string description)
{
	mLocation = location;
	mOwner = owner;
	mDescription = description;
	}

void Activity::set_Location(Room * location)
{
	mLocation = location;
}

Room * Activity::get_Location()
{
	return mLocation;
}

void Activity::set_Owner(Person * owner)
{
	mOwner = owner;
}

Person * Activity::get_Owner()
{
	return mOwner;
}

void Activity::set_Description(std::string description)
{
	mDescription = description;
}

std::string Activity::get_Description()
{
	return mDescription;
}
