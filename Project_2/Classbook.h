#pragma once
#include "Person.h"
#include "Discipline.h"

class Classbook
{
public:
	Classbook();
	~Classbook();
	void set_Year(std::string);
	std::string get_Year();
	void set_StudyGroup(int);
	int get_StudyGroup();
	Classbook(int studyGroup, std::string year);
	void addStudent(Person* person);
	void removeByCNP(std::string CNP);
	void removeByEmail(std::string email);
	void removeByFullName(std::string firstName, std::string lastName);
	Person* searchByLastName(std::string lastName);
	Person* searchByFirstName(std::string firstName);
	Person* searchByFullName(std::string firstName, std::string lastName);
	Person* searchByCNP(std::string CNP);
	Person* searchByEmail(std::string email);
	std::vector<Person*> getClassBook();
	void addMark(float mark, Discipline* discipline, std::string firstName, std::string lastName);
	void removeMark(std::string discipline, std::string firstName, std::string lastName);
	void updateMark(float mark, std::string discipline, std::string firstName, std::string lastName);
	long getSize();
private:
	std::string mYear;
	int mStudyGroup;
	std::vector<Person*> mClassbook;
};

