#include "pch.h"
#include "Discipline.h"


Discipline::Discipline()
{
}

void Discipline::set_Name(std::string Name)
{
	mName = Name;
}

std::string Discipline::get_Name()
{
	return mName;
}

