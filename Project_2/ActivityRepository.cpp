#include "pch.h"
#include "ActivityRepository.h"

Activity* ActivityRepository::findByLocation(Room* locationName) {
	for (int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->get_Location() == locationName)
			return mEntities[i];
	}
	throw std::runtime_error("Room with this activity does not exists!");
}

Activity* ActivityRepository::findByDescription(std::string description) {
	for (int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->get_Description() == description)
			return mEntities[i];
	}
	throw std::runtime_error("Room with this activity does not exists!");
}

std::vector<Activity*> ActivityRepository::searchByOwner(Person* ownerName) {
	std::vector<Activity*> activities;
	for (int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->get_Owner() == ownerName)
			activities.push_back(mEntities[i]);
	}
	if (activities.size() != 0)
		return activities;
	throw std::runtime_error("Activities with this person could not be found!");
}