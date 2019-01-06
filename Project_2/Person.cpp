#include "pch.h"
#include "Person.h"
#include "StudentRole.h"
#include "TeacherRole.h"
#include "GuestRole.h"
#include "AdministrativeRole.h"
#include <string>

Person::Person()
{
}

Person::Person(std::string FirstName, std::string LastName, std::string CNP, std::string Email):
	mFirstName(FirstName),
	mLastName(LastName),
	mCNP(CNP),
	mEmail(Email)
{

}

Person::Person(std::string FirstName, std::string LastName, std::string CNP, std::string Role, std::string Email) {
	this->mCNP = CNP;
	this->mFirstName = FirstName;
	this->mLastName = LastName;
	this->mEmail = Email;
	if (Role == "student") {
		this->mRoles.push_back(new StudentRole);
	}
	else if (Role == "teacher") {
		this->mRoles.push_back(new TeacherRole);
	}
	else if (Role == "guest") {
		this->mRoles.push_back(new GuestRole);
	}
	else if (Role == "administrative") {
		this->mRoles.push_back(new AdministrativeRole);
	}
	else {
		throw std::runtime_error("Role does not exist!");
	}
}

void Person::set_FirstName(std::string FN)
{
	mFirstName = FN;
}

std::string Person::get_FirstName()
{
	return mFirstName;
}

void Person::set_LastName(std::string LN)
{
	mLastName = LN;
}

std::string Person::get_LastName()
{
	return mLastName;
}

void Person::set_CNP(std::string cnp)
{
	mCNP = cnp;
}

std::string Person::get_CNP()
{
	return mCNP;
}

void Person::set_Emali(std::string email)
{
	mEmail = email;
}

std::string Person::get_Email()
{
	return mEmail;
}

std::istream& operator >> (std::istream& stream, Person& object) {
	std::cout << "Enter CNP= ";
	stream >> object.mCNP;
	std::cout << "Enter email= ";
	stream >> object.mEmail;
	std::cout << "Enter first name= ";
	stream >> object.mFirstName;
	std::cout << "Enter last name= ";
	stream >> object.mLastName;
	return stream;
}

std::ostream& operator << (std::ostream& stream, Person& object) {
	stream << "CNP= " << object.mCNP << "\n";
	stream << "Email= " << object.mEmail << "\n";
	stream << "First name= " << object.mFirstName << "\n";
	stream << "Last name= " << object.mLastName << "\n";
	StudentRole* studentRole;
	TeacherRole* teacherRole;
	if (object.isStudent()) {
		studentRole = dynamic_cast<StudentRole*>(object.displayRole(1));
		stream << "ID number= ";
		stream << studentRole->getIDNumber() << "\n";
		stream << "Study year= ";
		stream << studentRole->getStudyYear() << "\n";
		stream << "Study group= ";
		stream << studentRole->getStudyGroup() << "\n";
		stream << "Financial form= ";
		stream << studentRole->getFinancialForm() << "\n";
		for (int i = 0; i < studentRole->getMarksSize(); i++) {
			stream << "Student has " << studentRole->getMark(i)->getMark() << " at discipline " << studentRole->getMark(i)->getDiscipline() << ".\n";
		}

	}
	if (object.isTeacher()) {
		teacherRole = dynamic_cast<TeacherRole*>(object.displayRole(2));
		stream << "Studies= ";
		stream << teacherRole->getStudies() << "\n";
		stream << "Didactic function= ";
		stream << teacherRole->getDidacticFunction() << "\n";
	}
	return stream;
}

void Person::AddRole(Role* role) {
	std::vector<Role*>::iterator it;
	for (it = mRoles.begin(); it != mRoles.end(); it++) {
		if ((*it)->getRole() == role->getRole()) {
			throw std::runtime_error("Role already exists!");
		}
	}
	mRoles.push_back(role);
}

Role* Person::displayRole(int role) {
    for (int i = 0; i < mRoles.size(); i++) {
        if (role == mRoles[i]->getRole())
            return mRoles[i];
    }
    throw std::runtime_error("Role could not be found");
}

Role::RoleType Person::getRole(int role) {
    for (int i = 0; i < mRoles.size(); i++) {
        if (role == mRoles[i]->getRole())
            return mRoles[i]->getRole();
    }
    throw std::runtime_error("Role could not be found");
}

void Person::removeRole(int role) {
	std::vector<Role*>::iterator it;
	for (it = mRoles.begin(); it != mRoles.end(); it++) {
		if ((*it)->getRole() == role) {
			mRoles.erase(it);
			break;
		}
	}
}

bool Person::isStudent() {
	std::vector<Role*>::iterator it;
	for (it = mRoles.begin(); it != mRoles.end(); it++) {
		if ((*it)->getRole() == 1) {
			return true;
		}
	}
	return false;
}

bool Person::isTeacher() {
	std::vector<Role*>::iterator it;
	for (it = mRoles.begin(); it != mRoles.end(); it++) {
		if ((*it)->getRole() == 2) {
			return true;
		}
	}
	return false;
}