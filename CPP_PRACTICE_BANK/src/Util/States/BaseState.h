#pragma once

#include <iostream>
//#include "../../UI/Page.h"
class UserStateMachine;
class Page;

class BaseState
{
public:
	virtual ~BaseState();
	void SetStateMachine(UserStateMachine* _context);
	virtual void ExitState() = 0;
	virtual void EnterState() = 0;
	virtual void GetUserInput(std::string userInput) = 0;
	virtual void ChangePage(Page* page) = 0;
	UserStateMachine* GetStateMachine();
protected:
	UserStateMachine* _context = nullptr;
	std::shared_ptr<Page> _page;
};

