#include "pch.h"
#include "Person.h"
//#include "TeacherRole.hpp"
//#include "StudentRole.hpp"

Person::Person(std::string FirstName, std::string LastName, std::string CNP, std::string Email):
	mFirstName(FirstName),
	mLastName(LastName),
	mCNP(CNP),
	mEmail(Email)
{

}

Person::Person()
{
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

/*std::string Person::get_occupation()
{
	return "No occupation";
}*/

std::istream & operator>>(std::istream & stream, Person & p)
{
	std::string str;
	char ch;
	stream.get(ch);
	while (ch != '\n' && !stream.eof()) {
		str += ch;
		stream.get(ch);
	}
	p.mLastName = str;
	str = "";

	stream.get(ch);
	while (ch != '\n' && !stream.eof()) {
		str += ch;
		stream.get(ch);
	}
	p.mFirstName = str;
	str = "";

	stream.get(ch);
	while (ch != '\n' && !stream.eof()) {
		str += ch;
		stream.get(ch);
	}
	p.mCNP = str;
	str = "";

	stream.get(ch);
	while (ch != '\n' && !stream.eof()) {
		str += ch;
		stream.get(ch);
	}
	p.mEmail = str;
	str = "";

	return stream;
}

std::ostream & operator<<(std::ostream & stream, Person & p)
{
	stream << "Last name: " << p.mLastName << "\nFirst Name: " << p.mFirstName << "\nCNP: " << p.mCNP << "\nEmail: " << p.mEmail;
	return stream;
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