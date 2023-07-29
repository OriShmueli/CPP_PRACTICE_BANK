#include "LogInPage.h"

LogInPage::LogInPage(User* user, BaseState* baseState) : Page(user, baseState) {
	std::cout << "Type -b to go back. To reset your password type: -p." << std::endl;
	std::cout << "User Name: ";
	_providedUserName = true;
}

void LogInPage::GetUserOption(std::string userInput)
{
	LogInState* logInState = static_cast<LogInState*>(_currentState);
	if (userInput == "-b") {
		logInState->GetStateMachine()->ChangeState(new MainPageState);
	}

	if (userInput == "-f") {

	}

	if (_providedUserName) {
		_currentUserName = userInput;
		_providedUserName = false;
	}

	if (_providedPassword) {
		_currentPassword = userInput;
		_providedUserName = false;
	}

	if (!_providedUserName && !_providedPassword) {
		if (_checkUserNameAndPassword()) {
			//true -> log in to the thing
		}
	}
}

void LogInPage::AskForUserNameAndPassword()
{

}

bool LogInPage::_checkUserNameAndPassword()
{
	return true;
}
