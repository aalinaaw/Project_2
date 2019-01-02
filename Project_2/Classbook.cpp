#include "pch.h"
#include "Classbook.h"


Classbook::Classbook()
{
}


Classbook::~Classbook()
{
}

void Classbook::set_Year(std::string Year)
{
	mYear = Year;
}

std::string Classbook::get_Year()
{
	return mYear;
}

void Classbook::set_StudyGroup(int StudyGroup)
{
	mStudyGroup = StudyGroup;
}

int Classbook::get_StudyGroup()
{
	return mStudyGroup;
}
