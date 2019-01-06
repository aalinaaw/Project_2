#pragma once
#include "Role.h"
#include "Room.h"
#include <vector>

class AdministrativeRole :
	public Role
{
public:
	AdministrativeRole();
	AdministrativeRole(std::vector<Room*> rooms);
	AdministrativeRole(Room* room);
	Room* getRoom(std::string name);
	std::vector<Room*> getAllRooms();
	void addRoom(Room* room);
	void removeRoom(std::string name);
private:
	std::vector<Room*> mRoomsAdministered;
};

