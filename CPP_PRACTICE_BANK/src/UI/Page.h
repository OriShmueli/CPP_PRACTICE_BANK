#pragma once
#include <iostream>
#include "../DataBase/User_Types/User.h"

class Page
{
public:
	Page(User& user);
	~Page();
	virtual void GetUserOption(std::string userInput);
private:
	
};
