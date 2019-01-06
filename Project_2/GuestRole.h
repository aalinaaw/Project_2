#pragma once
#include <iostream>
#include "Role.h"
#include "Activity.h"
#include <vector>

class GuestRole :
	public Role
{
public:
	GuestRole();
	GuestRole(std::vector<Activity*> activities);
	GuestRole(Activity* activity);
private:
	std::vector<Activity*> mActivities;
};

