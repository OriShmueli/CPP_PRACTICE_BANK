#include "BaseState.h"

BaseState::~BaseState()
{
}

void BaseState::SetStateMachine(UserStateMachine* _context)
{
	this->_context = _context;
}

UserStateMachine* BaseState::GetStateMachine()
{
	return _context;
}
