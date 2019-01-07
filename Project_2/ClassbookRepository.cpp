#include "pch.h"
#include "ClassbookRepository.h"

Classbook* ClassbookRepository::searchByStudyGroupAndYear(int studyGroup, std::string year) {
	for (int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->get_StudyGroup() == studyGroup && mEntities[i]->get_Year() == year)
			return mEntities[i];
	}
	throw std::runtime_error("Class book of this study group could not be found!");
}

Person* ClassbookRepository::searchByFullNameAndYear(std::string firstName, std::string lastName, std::string year) {
	Person* person = NULL;
	for (int i = 0; i < mEntities.size(); i++) {
		try {
			person = mEntities[i]->searchByFullName(firstName, lastName);
		}
		catch (std::runtime_error const e) {}
		if (person != NULL && mEntities[i]->get_Year() == year)
			return person;
	}
	throw std::runtime_error("Person could not be found!");
}

Person* ClassbookRepository::searchByCNPAndYear(std::string CNP, std::string year) {
	Person* person = NULL;
	for (int i = 0; i < mEntities.size(); i++) {
		try {
			person = mEntities[i]->searchByCNP(CNP);
		}
		catch (std::runtime_error const e) {}
		if (person != NULL && mEntities[i]->get_Year() == year)
			return person;
	}
	throw std::runtime_error("Person could not be found!");
}

Person* ClassbookRepository::searchByEmailAndYear(std::string email, std::string year) {
	Person* person = NULL;
	for (int i = 0; i < mEntities.size(); i++) {
		try {
			person = mEntities[i]->searchByEmail(email);
		}
		catch (std::runtime_error const e) {}
		if (person != NULL && mEntities[i]->get_Year() == year)
			return person;
	}
	throw std::runtime_error("Person could not be found!");