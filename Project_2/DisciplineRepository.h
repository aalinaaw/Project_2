#pragma once
#include "Repository.h"
#include "Discipline.h"

class DisciplineRepository :
	public Repository<Discipline>
{
public:
	Discipline* searchByName(std::string);
};

