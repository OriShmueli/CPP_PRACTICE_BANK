#include "UserStateMachine.h"

UserStateMachine::UserStateMachine(BaseState* startingState) : _currentState(nullptr)
{

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
	if (_currentState != nullptr) {
		delete _currentState;
	}

	_currentState = newState;
	_currentState->SetStateMachine(this);
}
