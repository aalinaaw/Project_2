#pragma once
#include "Role.h"
#include "Mark.h"

class StudentRole :
	public Role
{
public:
	StudentRole();
	StudentRole(int IDNumber, int studyYear, int studyGroup, std::string financialForm);
	~StudentRole();
	void set_ID(int);
	int get_ID();
	void set_StudyYear(int);
	int get_StudyYear();
	void set_StudyGroup(int);
	int get_StudyGroup();
	void set_FinancialForm(std::string);
	std::string get_FinancialForm();
	long getMarksSize();
	float getMarkByDiscipline(std::string name);
	void addMark(Mark* mark);
	void addMark(float mark, Discipline* discipline);
	void removeMark(std::string discipline);
	void updateMark(float mark, std::string discipline);
	Mark* getMark(int iterator);
	bool isMarkSet(Discipline* discipline);
private:
	int mID;
	int mStudyYear;
	std::string mFinancialForm;
	std::vector<Mark*> mMarks;
	int mStudyGroup;
};

