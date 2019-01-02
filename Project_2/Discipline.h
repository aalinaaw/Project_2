#pragma once
#include "Activity.h"

class Discipline
{
public:
	Discipline();
	//to do: setters and getters la mName, addPersons, addActivity, removeActivity/Persons;
	void set_Name(std::string);
	std::string get_Name();
	
private:
	std::string mName;
	std::vector<Activity*> mActivity;
	std::vector<Person*> mStudents;
};

