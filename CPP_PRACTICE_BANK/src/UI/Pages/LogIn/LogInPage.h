#pragma once

#include "../../Page.h"

class LogInPage : public Page
{
	explicit LogInPage(User* user, BaseState* baseState);
	void GetUserOption(std::string userInput) override;
};

