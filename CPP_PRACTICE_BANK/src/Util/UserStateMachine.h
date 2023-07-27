#pragma once

#include "States/BaseState.h"
#include "../DataBase/User_Types/User.h"
#include "History.h"
#include "States/MainPageState.h"
//class BaseState;
class UserStateMachine
{
public:
	UserStateMachine();
	~UserStateMachine();

	BaseState* GetCurrentState();
	User* GetUser();
	History* GetHistory();
	
	void ChangeState(BaseState* newState);
	const char* GetUserName();
	void SetUserName(const char* newUserName);

private:
	BaseState* _currentState;
	User* _currentUserTypeAndData;
	History* _history;
	const char* _userName = "User";
};
