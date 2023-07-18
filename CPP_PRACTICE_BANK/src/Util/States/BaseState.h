#pragma once

class UserStateMachine;

class BaseState
{
public:
	virtual ~BaseState();
	void SetStateMachine(UserStateMachine* _context);
private: 
	UserStateMachine* _context;
};

