#include "LogInState.h"

void LogInState::ExitState()
{
	if (_page == nullptr) {
		std::cout << "_page(login) == nullptr" << std::endl;
	}
	else {
		std::cout << "_page(login) == is not deleted" << typeid(_page).name() << std::endl;
	//delete _page;
	}
	
}

void LogInState::EnterState()
{
	_page = std::make_shared<LogInPage>(new LogInPage(_context->GetUser(), this));
}

void LogInState::GetUserInput(std::string userInput)
{
	_page->GetUserOption(userInput);
}

void LogInState::ChangePage(Page* page)
{
}
