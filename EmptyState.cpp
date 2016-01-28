#include <iostream>
#include "Context.h"
#include "EmptyState.h"

// Using State pattern to display nested menus
// Class that implements emptystate menu
bool EmptyState::choose(Context &con){
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
			con.changeState(Context::COFFEE);
			return true;
			
		case 2: 
			con.changeState(Context::OTHER);
			return true;
			
		case 3:
			return false;
		
		default:
			std::cout << "Illegal choice" << std::endl;
			return true;
		}
}
	
void EmptyState::display() {
	std::cout << "Selections:\n"
		 << "1. Choose Coffee\n"
		 << "2. Choose other beverage\n"
		 << "3. Quit\n" << std::endl;
}
