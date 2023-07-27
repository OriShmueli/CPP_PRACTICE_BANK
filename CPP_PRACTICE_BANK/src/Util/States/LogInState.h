#pragma once

#include "../UserStateMachine.h"
#include "../../UI/Pages/LogIn/LogInPage.h"

class LogInState : public BaseState
{
	void ExitState() override;
	void EnterState() override;
	void GetUserInput(std::string userInput) override;
	void ChangePage(Page* page) override;
};

