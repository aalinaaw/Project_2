#include "pch.h"
#include "Room.h"


Room::Room()
{
}

Room::Room(std::string name):
	mName(name)
{
}

void Room::set_Name(std::string name)
{
	mName = name;
}

std::string Room::get_Name()
{
	return mName;
}
