#pragma once
#include "Repository.h"
#include "Classbook.h"

class ClassbookRepository :
	public Repository<Classbook>
{
public:
	Classbook* searchByStudyGroupAndYear(int studyGroup, std::string year);
	Person* searchByFullNameAndYear(std::string firstName, std::string lastName, std::string year);
	Person* searchByCNPAndYear(std::string, std::string);
	Person* searchByEmailAndYear(std::string, std::string);
};

