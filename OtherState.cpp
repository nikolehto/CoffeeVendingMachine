#include <iostream>

#include "Context.h"
#include "OtherState.h"

// Class that implements other beverage state
bool OtherState::choose(Context &con){
	display();
	int choice;
	std::cin >> choice;
	
	if (!std::cin.good())
	{
		std::cin.clear();
		std::cin.ignore(100, '\n');
		
		choice = -1;
	}
	
	switch(choice){
		case 1: 
			con.addPrice(1);
			con.addDrink("Hot water");
			con.changeState(Context::NONEMPTY);
			return true;
			
		case 2:
			con.addPrice(1.50);
			con.addDrink("Tea");
			con.changeState(Context::NONEMPTY);
			return true;
			
		case 3:
			con.addPrice(2.50);
			con.addDrink("Cocoa");
			con.changeState(Context::NONEMPTY);
			return true;
			
		case 4:
			con.changeState(Context::MAIN);
			return true;
			
		default:
			std::cout << "Illegal choice" << std::endl;
			return true;
		}
}
	
void OtherState::display() {
	std::cout << "Choose other beverage:\n"
		 << "1. Hot water 1 euro\n"
		 << "2. Tea 1.5 euro\n"
		 << "3. Cocoa 2.5 euro\n"
		 << "4. Cancel\n" << std::endl;
}
