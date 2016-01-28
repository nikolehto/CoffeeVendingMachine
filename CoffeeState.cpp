#include <iostream>

#include "Context.h"
#include "CoffeeState.h"

// Class that implements coffeestate
bool CoffeeState::choose(Context &con){
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
			con.addPrice(1.50);
			con.addDrink("Small coffee");
			con.changeState(Context::NONEMPTY);
			return true;
			
		case 2:
			con.addPrice(2);
			con.addDrink("Large coffee");
			con.changeState(Context::NONEMPTY);
			return true;
			
		case 3:
			con.addPrice(2.5);
			con.addDrink("Espresso");
			con.changeState(Context::NONEMPTY);
			return true;
			
		case 4:
			con.addPrice(3);
			con.addDrink("Latte");
			con.changeState(Context::NONEMPTY);
			return true;
			
		case 5:
			con.changeState(Context::MAIN);
			return true;
			
		default:
			std::cout << "Illegal choice" << std::endl;
			return true;
		}
}
	
void CoffeeState::display() {
	std::cout << "Choose coffee:\n"
		 << "1. Small coffee 1.50 euro\n"
		 << "2. Large coffee 2 euro\n"
		 << "3. Espresso 2.5 euro\n"
		 << "4. Latte 3 euro\n"
		 << "5. Cancel\n" << std::endl;
}
