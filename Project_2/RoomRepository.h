#pragma once
#include "Repository.h"
#include "Room.h"

class RoomRepository :
	public Repository<Room>
{
public:
	Room* findByName(std::string name);
	long size();
};

