#include "pch.h"
#include "Mark.h"

Mark::Mark(float mark, Discipline* discipline) {
	this->mMark = mark;
	this->mDiscipline = discipline;
}

std::string Mark::getDiscipline() {
	return this->mDiscipline->getName();
}

float Mark::getMark() {
	return this->mMark;
}

void Mark::setDiscipline(Discipline * discipline) {
	this->mDiscipline = discipline;
}

void Mark::setMark(float mark) {
	this->mMark = mark;
}
