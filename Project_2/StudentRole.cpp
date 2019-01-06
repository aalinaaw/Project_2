#include "pch.h"
#include "StudentRole.h"


StudentRole::StudentRole()
	: Role (Role::STUDENT_ROLE)
{
}

StudentRole::StudentRole(int ID, int studyYear, int studyGroup, std::string financialForm)
	: Role(Role::STUDENT_ROLE) {
	this->mID = ID;
	this->mStudyYear = studyYear;
	this->mStudyGroup = studyGroup;
	this->mFinancialForm = financialForm;
}

StudentRole::~StudentRole()
{
}

void StudentRole::set_ID(int ID)
{
	mID = ID;
}

int StudentRole::get_ID()
{
	return mID;
}

void StudentRole::set_StudyYear(int StudyYear)
{
	mStudyYear = StudyYear;
}

int StudentRole::get_StudyYear()
{
	return mStudyYear;
}

void StudentRole::set_StudyGroup(int StudyGroup)
{
	mStudyGroup = StudyGroup;
}

int StudentRole::get_StudyGroup()
{
	return mStudyGroup;
}

void StudentRole::set_FinancialForm(std::string FinancialForm)
{
	mFinancialForm = FinancialForm;
}

std::string StudentRole::get_FinancialForm()
{
	return mFinancialForm;
}

long StudentRole::getMarksSize() {
	return this->mMarks.size();
}

float StudentRole::getMarkByDiscipline(std::string name) {
	std::vector<Mark*>::iterator it;
	for (it = mMarks.begin(); it != mMarks.end(); it++) {
		if ((*it)->getDiscipline() == name)
			return (*it)->getMark();
	}
	throw std::runtime_error("Discipline could not be found");
}

void StudentRole::addMark(Mark* mark) {
	mMarks.push_back(mark);
}

void StudentRole::addMark(float mark, Discipline* discipline) {
	if (isMarkSet(discipline)) {
		updateMark(mark, discipline->getName());
	}
	else {
		this->mMarks.push_back(new Mark(mark, discipline));
	}
}

void StudentRole::removeMark(std::string discipline) {
	std::vector<Mark*>::iterator it;
	for (it = mMarks.begin(); it != mMarks.end(); it++) {
		if ((*it)->getDiscipline() == discipline) {
			mMarks.erase(it);
			break;
		}
	}
}

void StudentRole::updateMark(float mark, std::string discipline) {
	std::vector<Mark*>::iterator it;
	for (it = mMarks.begin(); it != mMarks.end(); it++) {
		if ((*it)->getDiscipline() == discipline) {
			(*it)->setMark(mark);
			break;
		}
	}
}

Mark *StudentRole::getMark(int iterator) {
	return this->mMarks[iterator];
}

bool StudentRole::isMarkSet(Discipline *discipline) {
	std::vector<Mark*>::iterator it;
	for (it = mMarks.begin(); it != mMarks.end(); it++) {
		if ((*it)->getDiscipline() == discipline->getName()) {
			return true;
		}
	}
	return false;
}