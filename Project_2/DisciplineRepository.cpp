#include "pch.h"
#include "DisciplineRepository.h"

Discipline* DisciplineRepository::searchByName(std::string name) {
	typename std::vector<Discipline*>::iterator it;
	for (it = mEntities.begin(); it != mEntities.end(); it++) {
		if ((*it)->getName() == name)
			return *it;
	}
	throw std::runtime_error("Discipline could not be found!");
}