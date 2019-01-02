#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Role.h"
class Person
{
public:
	Person();
	Person(std::string, std::string, std::string, std::string Email = "");
	Person(std::string, std::string, std::string, std::string, std::string);
	
	void set_FirstName(std::string);
	std::string get_FirstName();
	void set_LastName(std::string);
	std::string get_LastName();
	void set_CNP(std::string);
	std::string get_CNP();
	void set_Emali(std::string);
	std::string get_Email();

	//virtual std::string get_occupation();

	friend std::istream & operator>>(std::istream & stream, Person &);
	friend std::ostream & operator<<(std::ostream & stream, Person &);

	void AddRole(Role* role)
	{
		mRoles.push_back(role);
	}
	Role* displayRole(int);
	Role::RoleType getRole(int);

protected:
	std::string mFirstName;
	std::string mLastName;
	std::string mCNP;
	std::string mEmail;
	std::vector<Role*>mRoles;
};

