#include "pch.h"
#include "Role.h"

Role::Role(RoleType type)
{	
	this->mType = type;
}
Role::RoleType Role::getRole()
{
    return mType;
}