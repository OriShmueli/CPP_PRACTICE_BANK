#include "MainPage.h"

MainPage::MainPage(User* user, BaseState* baseState) : Page(user, baseState)
{
	std::cout << "[1] log in" << std::endl << "[2] sign in" << std::endl << "[3] exit" << std::endl;
}

void MainPage::GetUserOption(std::string userInput)
{
	MainPageState* mainState = static_cast<MainPageState*>(_currentState);
	if (userInput == "1") {
		
		mainState->GetStateMachine()->ChangeState(new LogInState);
	}

	if(userInput == "2"){
		
	}
	
	if(userInput == "3"){
	
	}
}