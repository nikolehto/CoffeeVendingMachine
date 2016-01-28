#ifndef COFFEESTATE_H
#define COFFEESTATE_H

#include "MenuState.h"

class Context;

class CoffeeState: public MenuState {
	
	public:
		bool choose(Context& con);
		
	private:
		void display();
};


#endif
