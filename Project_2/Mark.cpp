#include "pch.h"
#include "Mark.h"


Mark::Mark()
{
}

void Mark::set_Mark(float Mark)
{
	mMark = Mark;
}

float Mark::get_Mark()
{
	return mMark;
}

void Mark::set_Discipline(Discipline* Discipline)
{
	mDiscipline = Discipline;
}

std::string Mark::get_Discipline()
{
	return mDiscipline -> get_Name();
}
