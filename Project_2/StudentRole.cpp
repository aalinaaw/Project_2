#include "pch.h"
#include "StudentRole.h"


StudentRole::StudentRole()
	: Role (Role::STUDENT_ROLE)
{
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

