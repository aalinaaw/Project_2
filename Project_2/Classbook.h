#pragma once
#include "Person.h"

class Classbook
{
public:
	Classbook();
	~Classbook();
	//To do: functii de search dupa nume/cnp, remove si add students, add/remove/update mark, setters and getters la mYear si mStudyGroup
	void set_Year(std::string);
	std::string get_Year();
	void set_StudyGroup(int);
	int get_StudyGroup();
private:
	std::string mYear;
	int mStudyGroup;
	std::vector<Person*> mStudents;
};

