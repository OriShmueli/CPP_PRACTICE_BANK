#pragma once

#include "../UserStateMachine.h"
#include "../../UI/Pages/MainPage.h"

class MainPageState : public BaseState
{
public:
	void ExitState() override;
	void EnterState() override;
	void GetUserInput(std::string userInput) override;
	void ChangePage(Page* page) override;
private: 
	
};

