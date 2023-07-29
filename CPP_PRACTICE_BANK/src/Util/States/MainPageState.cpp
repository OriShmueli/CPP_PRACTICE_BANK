#include "MainPageState.h"

void MainPageState::ExitState()
{
	std::cout << "deleted main page" << std::endl;
	//delete _page;
}

void MainPageState::EnterState()
{
	_page = std::make_shared<MainPage>(new MainPage(_context->GetUser(), this));
}

void MainPageState::GetUserInput(std::string userInput)
{
	_page->GetUserOption(userInput);
}

void MainPageState::ChangePage(Page* page)
{
}
