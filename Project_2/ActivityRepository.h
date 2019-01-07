#pragma once
#include "Repository.h"
#include "Activity.h"
#include <vector>

class ActivityRepository :
	public Repository<Activity>
{
public:
	Activity* findByLocation(Room* locationName);
	Activity* findByDescription(std::string description);
	std::vector<Activity*> searchByOwner(Person* ownerName);
};

