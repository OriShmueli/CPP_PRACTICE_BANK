#include "MainPage.h"

MainPage::MainPage(User* user, BaseState* baseState) : Page(user, baseState)
{
	std::cout << "[1] log in" << std::endl << "[2] sign in" << std::endl << "[3] exit" << std::endl;
}

void MainPage::GetUserOption(std::string userInput)
{
	MainPageState* mainState = dynamic_cast<MainPageState*>(_currentState);
	if (userInput == "1") {		
		//std::cout<< "GET_USER_POPTION()[LogInPage]" << typeid()
		mainState->GetStateMachine()->ChangeState(new LogInState);
	}

	if(userInput == "2"){
		std::cout << "somwhing 2" << std::endl;
	}
	
	if(userInput == "3"){
	
	}
}