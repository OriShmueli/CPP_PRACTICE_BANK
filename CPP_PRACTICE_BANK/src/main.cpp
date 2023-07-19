#include <iostream>
#include <memory>
#include <stdexcept>
#include "Util\UserStateMachine.h"
#include "Util/States/MainPageState.h"
using namespace std;

/// <summary>
/// 
/// * 2 types of users: admin, normal ^
/// * first page log in as: admin or user. OR. create new account: only users ^ 
/// * Open an account ^
/// * Show account details
/// * Deposit ^
/// * Withdraw ^
/// * Search and exit. ^
/// 
/// [1] place: "name" 
///	[2] place: "name"
/// 
/// starting page:
///	[1] log in (user and admin depend on the user name and password)
/// [2] sign in
/// [3] exit
/// 
/// log in: 
///		user name or mail:
///		pass: 
///		[-f] forget pass ?
///		[-b] back
/// 
/// forget pass:
///		enter mail or user name: 
///		[-b] back
///		
///		forget pass:
///			if no mail -> message
///			else 
///			
///			reset pass:
///				pass 1:
///				pass 2:
///				
/// 
/// user:
///		[1] draw money from bank. or put. (auto directin you to draw or put money)
///		[2] show logs 
///		[3] manage "place" & show amounts & search places (included)
///		[4] show account details
///		[5] log out
///		
///		user 1:
///			show user his "places" options: and how match in etch place.
///			[1] search place by name: 
///			[2] back
///			[3+] the places...
///			
///				user 1-3+:		
///					directed to: [user 3 - 1+]
///										
///		user 2: 
///			[1] search logs 
///			[2] show more
///			[3] back
///			
///			user 2 - 1:
///				[1] search with date
///				[2] search with amount of money 
///				[3] back
///			
///				user 2 - 1 - 1/2:
///					commends & information (-b, for exit) [this is like a google search. show automatic resolts]:
///		
///		user 3:
///			[1] show user places
///			[2] search places
///			[b] back
///		
///			user 3 - 1:
///				how match money you want to put or draw ?
///				[1] put money
///				[2] draw money
///				[3] edit name
///				[4] delete place
///				[5] show logs of this "place"
///				[3] back
///				
///				user 3 - 1 - 1/2:
///						write amount: ______
///						*enter*
///						can/cennot or less then 0
///							can: your "place" have x amount of money with the bank taking % for drawing (show befor % after % exetra...) 
///						[b] back
///				
///				user 3 - 1 - 5:
///						commends & information (-b, for exit) [this is like a google search. show automatic resolts]: (of this "place)
///						
/// </summary>
/// <returns>
/// </returns>

int main() {
	
	UserStateMachine* usm = new UserStateMachine();

	while (true)
	{
		std::string commend;
		cin >> commend;
		std::cout << "Commend: " << commend << endl;
		usm->GetCurrentState()->GetUserInput(commend);
	}

	delete usm;

	return 0;
}   