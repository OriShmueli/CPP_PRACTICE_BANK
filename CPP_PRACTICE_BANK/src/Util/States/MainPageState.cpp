#include "MainPageState.h"

void MainPageState::ExitState()
{
	delete _page;
}

void MainPageState::EnterState()
{
	_page = new MainPage(_context->GetUser(), this);
}

void MainPageState::GetUserInput(std::string userInput)
{
	_page->GetUserOption(userInput);
}

void MainPageState::ChangePage(Page* page)
{
}
