#include "Page.h"

Page::Page(User* user, BaseState* baseState)
{
	_currentUser = user;
	_currentState = baseState;
}

Page::~Page()
{
}

void Page::GetUserOption(std::string userInput)
{

}


