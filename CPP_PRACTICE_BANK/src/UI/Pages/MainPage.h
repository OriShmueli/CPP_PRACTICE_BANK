#pragma once

#include "../Page.h"
#include "../../Util/States/MainPageState.h"
#include "../../Util/States/LogInState.h"
#include "../../Util/States/SignInState.h"

class MainPage : public Page
{
public:
	explicit MainPage(User* user, BaseState* baseState);
	void GetUserOption(std::string userInput) override;
};

