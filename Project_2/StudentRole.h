#pragma once
#include "Role.h"
#include "Mark.h"

class StudentRole :
	public Role
{
public:
	StudentRole();
	~StudentRole();
	//TO DO: getMark, setMark, removeMark si constructorii;
	void set_ID(int);
	int get_ID();
	void set_StudyYear(int);
	int get_StudyYear();
	void set_StudyGroup(int);
	int get_StudyGroup();
	void set_FinancialForm(std::string);
	std::string get_FinancialForm();
private:
	int mID;
	int mStudyYear;
	std::string mFinancialForm;
	std::vector<Mark*> mMarks;
	int mStudyGroup;
};

