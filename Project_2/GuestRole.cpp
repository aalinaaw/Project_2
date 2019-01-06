#include "pch.h"
#include "GuestRole.h"


GuestRole::GuestRole()
	:Role(Role::GUEST_ROLE)
{
}

GuestRole::GuestRole(std::vector<Activity*> activities)
	: Role(Role::GUEST_ROLE)
{
	this->mActivities = activities;
}

GuestRole::GuestRole(Activity* activity)
	: Role(Role::GUEST_ROLE)
{
	this->mActivities.push_back(activity);
}