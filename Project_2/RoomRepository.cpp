#include "pch.h"
#include "RoomRepository.h"

Room* RoomRepository::findByName(std::string name) {
	for (int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->get_Name() == name)
			return mEntities[i];
	}
	throw std::runtime_error("There isn't any room with this name!");
}

long RoomRepository::size() {
	return mEntities.size();
}