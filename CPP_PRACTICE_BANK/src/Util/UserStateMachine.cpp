#include "UserStateMachine.h"

UserStateMachine::UserStateMachine() : _currentState(nullptr), _currentUserTypeAndData(nullptr), _history(nullptr)
{
	ChangeState(new MainPageState);
}

UserStateMachine::~UserStateMachine()
{
	delete _currentState;
}

BaseState* UserStateMachine::GetCurrentState()
{
	return _currentState;
}

User* UserStateMachine::GetUser()
{
	return _currentUserTypeAndData;
}

History* UserStateMachine::GetHistory()
{
	return _history;
}

void UserStateMachine::ChangeState(BaseState* newState)
{	
	if (_history != nullptr) {
		
		delete _history;
	}

	if (_currentState != nullptr) {
		_currentState->ExitState();
		delete _currentState;
	}
	_history = new History();
	_currentState = newState;
	_currentState->SetStateMachine(this);
	_currentState->EnterState();
}

const char* UserStateMachine::GetUserName()
{
	return _userName;
}

void UserStateMachine::SetUserName(const char* newUserName)
{
	_userName = newUserName;
}
