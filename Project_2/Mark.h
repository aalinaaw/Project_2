#pragma once
#include "Discipline.h"

class Mark
{
public:
	Mark();
	//setters and getters pentru mMark and mDiscipline
	void set_Mark(float);
	float get_Mark();
	void set_Discipline(Discipline*);
	std::string get_Discipline();
private:
	float mMark;
	Discipline* mDiscipline;
};

