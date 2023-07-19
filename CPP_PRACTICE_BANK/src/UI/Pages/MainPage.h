#pragma once

#include "../Page.h"

class MainPage : public Page
{
public:
	explicit MainPage(User* user, BaseState* baseState);
	void GetUserOption(std::string userInput) override;
};

