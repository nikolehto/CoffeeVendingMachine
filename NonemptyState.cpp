#include <iostream>
#include "Context.h"
#include "NonemptyState.h"

// Class that implements nonempty state menu
bool NonemptyState::choose(Context &con){
	
	std::cout << "Selections:\n"
			  << "1. Choose Coffee\n"
			  << "2. Choose other beverage\n"
			  << "3. Pay: Total sum is " << con.getPrice() << " euro \n"
			  << "4. Quit\n" << std::endl;
	
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
			con.addPrice(con.getPrice() * -1); // add minus price = 0
			con.printAndServeDrinks();
			con.changeState(Context::EMPTY);
			return true;
			
		case 4:
			return false;
		
		default:
			std::cout << "Illegal choice" << std::endl;
			return true;
		}	
}

