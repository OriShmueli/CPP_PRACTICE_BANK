#pragma once

#include "../../Page.h"
#include "../../../Util/States/LogInState.h"

class LogInPage : public Page
{
public:
	explicit LogInPage(User* user, BaseState* baseState);
	void GetUserOption(std::string userInput) override;
private:
	bool _providedUserName = false;
	bool _providedPassword = false;
	void AskForUserNameAndPassword();
	bool _checkUserNameAndPassword();
	std::string _currentUserName = "null";
	std::string _currentPassword = "null";
};

