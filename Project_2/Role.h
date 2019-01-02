#pragma once
#include <iostream>
class Role
{
public:
	Role() {}
	enum RoleType
	{
		STUDENT_ROLE = 1,
        TEACHER_ROLE,
        GUEST_ROLE,
        ADMINISTRATIVE_ROLE
	};
	Role(RoleType);
	virtual ~Role() {}
    RoleType getRole();

private:
	RoleType mType;
};

