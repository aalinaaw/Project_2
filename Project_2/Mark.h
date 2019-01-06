#pragma once
#include "Discipline.h"

class Mark
{
public:
	Mark(float mark, Discipline* discipline);
	std::string getDiscipline();
	float getMark();
	void setDiscipline(Discipline* discipline);
	void setMark(float mark);
	void setMark(float mark);
private:
	float mMark;
	Discipline* mDiscipline;
};

