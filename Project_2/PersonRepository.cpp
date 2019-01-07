#include "pch.h"
#include "PersonRepository.h"

Person* PersonRepository::searchByLastName(std::string lastName) {
	for (int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->get_LastName() == lastName)
			return mEntities[i];
	}
	throw std::runtime_error("Last name could not be found");
}

Person* PersonRepository::searchByFirstName(std::string firstName) {
	for (int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->get_FirstName() == firstName)
			return mEntities[i];
	}
	throw std::runtime_error("First name could not be found");
}

Person* PersonRepository::searchByFullName(std::string firstName, std::string lastName) {
	for (int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->get_FirstName() == firstName && mEntities[i]->get_LastName() == lastName)
			return mEntities[i];
	}
	throw std::runtime_error("Person could not be found!");
}

Person* PersonRepository::searchByCNP(std::string CNP) {
	for (int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->get_CNP() == CNP)
			return mEntities[i];
	}
	throw std::runtime_error("Person with this CNP could not be found!");
}

Person* PersonRepository::searchByEmail(std::string email) {
	for (int i = 0; i < mEntities.size(); i++) {
		if (mEntities[i]->get_Email() == email)
			return mEntities[i];
	}
	throw std::runtime_error("Person with this email could not be found!");
}

std::vector<Person*> PersonRepository::searchByRole(int role) {
	std::vector<Person*> persons;
	for (int i = 0; i < mEntities.size(); i++) {
		try {
			if (mEntities[i]->getRole(role) == role)
				persons.push_back(mEntities[i]);
		}
		catch (std::runtime_error) {}
	}
	if (persons.size() != 0)
		return persons;
	throw std::runtime_error("Persons with this role could not be found!");
}

long PersonRepository::size() {
	return mEntities.size();
}

