#pragma once

#include "States/BaseState.h"
#include "../DataBase/User_Types/User.h"
#include "History.h"

class UserStateMachine
{
public:
	UserStateMachine(BaseState* startingState);
	~UserStateMachine();

	BaseState* GetCurrentState();
	User* GetUser();
	History* GetHistory();
	
	void ChangeState(BaseState* newState);

private:
	BaseState* _currentState;
	User* _currentUserTypeAndData;
	History* _history;
};
