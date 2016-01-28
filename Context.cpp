#include <iostream>
#include <string>
#include <list>

#include "Context.h"
#include "EmptyState.h"
#include "NonemptyState.h"
#include "CoffeeState.h"
#include "OtherState.h"

using namespace std;

Context::Context() {
	emptyState = new EmptyState();
	nonemptyState = new NonemptyState();
	coffeeState = new CoffeeState();
	otherState = new OtherState();

	currentState = emptyState;
	mainState = emptyState;	// mainState is memory. Used in case when program returns back to mainmenu.
	
	price = 0;
}

void Context::makeChoice() {
	// While choose method of state returns true
	while(currentState->choose(*this));
}

void Context::changeState(int to) {
	switch(to){
		case EMPTY:
			mainState = emptyState;
			currentState = emptyState;
			break;
			
		case NONEMPTY:
			mainState = nonemptyState;
			currentState = nonemptyState;
			break;
		
		case COFFEE:
			currentState = coffeeState;
			break;
		
		case OTHER:
			currentState = otherState;
			break;
			
		case MAIN:
			currentState = mainState;
			break;
		
	}
}

void Context::addPrice(double price_p) {
	price += price_p;
}

double Context::getPrice() const {
	return price;
}

void Context::printPrice() const {
	cout << price << endl;
}

void Context::addDrink(string drink) {
	drinks.push_back(drink);
	
}

void Context::printAndServeDrinks() {
	list<string>::iterator it;
	list<string>::iterator temp;
		
	drinks.sort();
	temp = drinks.begin();
	int i = 0;
	
	cout << "****************\n"
		 << "Serving: \n" << endl;
	
	for (it=drinks.begin(); it!=drinks.end(); ++it) {

		if(*it == *temp) { // If iterator is same than previous
			i++;
		}
		
		else {	// if iterator is not same than previous.
			cout << i << " x " << *temp << "\n";
			temp = it;
			i = 1;
		}
	}
	
		// List ended and iterator wasn't same than previous
	cout << i << " x " << *temp << "\n";
	
	cout << "****************\n\n" << endl;

	drinks.clear();
	
}










