#pragma once
#include <iostream>
class Room
{
public:
	Room();
	Room(std::string);
	void set_Name(std::string);
	std::string get_Name();
protected:
	std::string mName;
};

