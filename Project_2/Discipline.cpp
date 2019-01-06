#include "pch.h"
#include "Discipline.h"
#include "StudentRole.h"

Discipline::Discipline(std::string name, Activity* activity) {
	this->mName = name;
	this->mActivities.push_back(activity);
}

Discipline::Discipline(std::string name, std::vector<Activity*> activities) {
	this->mName = name;
	this->mActivities = activities;
}

std::string Discipline::getName() {
	return mName;
}

Activity* Discipline::getActivity(std::string name) {
	for (int i = 0; i < mActivities.size(); i++) {
		if (mActivities[i]->get_Description() == name)
			return mActivities[i];
	}
	throw std::runtime_error("Activity does not exist!");
}

std::vector<Activity*> Discipline::getActivities() {
	return mActivities;
}

void Discipline::setName(std::string name) {
	this->mName = name;
}

void Discipline::setActivities(std::vector<Activity *> activities) {
	this->mActivities = activities;
}

void Discipline::addActivity(Activity* activity) {
	this->mActivities.push_back(activity);
}

void Discipline::addActivities(std::vector<Activity*> activities) {
	this->mActivities = activities;
}

void Discipline::removeActivity(std::string name) {
	std::vector<Activity*>::iterator it;
	bool valide = false;
	for (it = mActivities.begin(); it != mActivities.end(); it++) {
		if ((*it)->get_Description() == name) {
			mActivities.erase(it);
			valide = true;
			break;
		}
	}
	if (!valide)
		throw std::runtime_error("Activity does not exist!");
}

void Discipline::addParticipant(Person* person) {
	this->mParticipants.push_back(person);
	StudentRole* student = NULL;
	try {
		student = dynamic_cast<StudentRole*>(person->displayRole(1));
	}
	catch (std::runtime_error const e) {}
	if (student != NULL)
		student->addMark(NULL, this);
}

void Discipline::removeParticipantByCnp(std::string CNP) {
	std::vector<Person*>::iterator it;
	bool valide = false;
	for (it = mParticipants.begin(); it != mParticipants.end(); it++) {
		if ((*it)->get_CNP() == CNP) {
			mParticipants.erase(it);
			valide = true;
			break;
		}
	}
	if (!valide)
		throw std::runtime_error("Person could not be found");
}

void Discipline::removeByFullName(std::string firstName, std::string lastName) {
	std::vector<Person*>::iterator it;
	bool valide = false;
	for (it = mParticipants.begin(); it != mParticipants.end(); it++) {
		if ((*it)->get_LastName() == lastName && (*it)->get_FirstName() == firstName) {
			mParticipants.erase(it);
			valide = true;
			break;
		}
	}
	if (!valide)
		throw std::runtime_error("Person could not be found");
}

long Discipline::getSizeActivities() {
	return mActivities.size();
}

long Discipline::getSizeParticipants() {
	return mParticipants.size();
}


