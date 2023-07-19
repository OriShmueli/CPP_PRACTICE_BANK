#pragma once
#include <iostream>
#include "../DataBase/User_Types/User.h"
#include "../Util/States/BaseState.h"

class Page
{
public:
	explicit Page(User* user, BaseState* baseState);
	~Page();
	virtual void GetUserOption(std::string userInput);
protected:
	User* _currentUser;
	BaseState* _currentState;
};
